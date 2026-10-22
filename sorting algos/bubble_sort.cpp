#include <iostream>
#include <vector>
using namespace std;


void bubble_sort(vector<int>&arr,int n){
   for(int i=0;i<n-1;i++){
      for(int j=0;j<n-i-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
      }
   }
    }
void display(vector<int>&arr){
    cout<<"sorted array: "<<endl;
    for(int i =0 ; i< arr.size() ; i++){
        cout<<arr[i]<<" ";
    }
   
}
int main() {
    int n = 6;
  
    vector<int> arr = {7, 2, 6, 1, 8, 5};

        cout << "Unsorted Array: ";
    for(int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout<<endl;
bubble_sort(arr,n);

display(arr);
    return 0;
}