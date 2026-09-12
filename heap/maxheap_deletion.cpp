#include <iostream>
#include <vector>
using namespace std;

void insertmaxheapify(vector<int>&heap,int value){
    heap.push_back(value);
    int i =heap.size()-1;
    while(i>0){
        int parent=(i-1)/2;
        if(heap[i]>heap[parent]){
            swap(heap[i],heap[parent]);
            i=parent;
        }
        else{
            break;
        }
    }
}

void display(vector<int>&heap){

    for(int x : heap){
        cout<<x<<" ";
    }
    cout<<endl;
}


int main() {
    vector<int>heap;
     int n;
    cout<<"enter the number of elements: ";
    cin>>n;
    cout<<"enter the elements:\n";
    for(int i=0;i<n;i++){
      int value;
      cin >>value;

      insertmaxheapify(heap,value);
    }
    cout<<"Max heap: ";
    display(heap);

    return 0;
}