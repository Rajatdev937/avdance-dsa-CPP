#include <iostream>
using namespace std;

void heapify(int arr[],int size ,int i){
int largest=i;
int left=2*i+1;
int right=2*i+2;

if(left<size && arr[left]>arr[largest]){
    largest=left;
}
if(right < size && arr[right]>arr[largest]){
    largest=right;
}
if(largest != i){
    swap(arr[i],arr[largest]);
    heapify(arr,size,largest);
}
}

void heapsort(int arr[],int size){
    for(int i=size/2-1;i >=0 ;i--){
        swap(arr[0],arr[i]);
        heapify(arr,size,i);
    }
   for(int i = size-1 ; i >=0 ;i--){
    swap(arr[0],arr[i]);
    heapify(arr,i,0);
   }
}
 


int main() {
    
    int arr[100];
    int size;
    cout<<"enter the size of array: "<<endl;
    cin>>size;

     cout<<"enter"<<size<<" elements of array"<<endl;
     for(int i=0;i<=size;i++){
        cin>>arr[i];
     }
   heapsort(arr, size);

    cout << "Sorted array: ";
    for (int i = 0; i <= size; i++)
        cout << arr[i] << " ";
    return 0;
}