#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;


int partition(vector<int>& arr, int start, int end) {
    int pivot = arr[end];
    int pos = start;

    for (int i = start; i < end; i++) {
        if (arr[i] <= pivot) {
            swap(arr[pos], arr[i]);   // Correct swap
            pos++;
        }
    }

    // Place pivot in its correct position
    swap(arr[pos], arr[end]);

    return pos;
}

void quick_sort(vector<int>&arr,int start,int end){

  if(start<end){
    int pivot=partition(arr,start,end);

    //left side
  quick_sort(arr,start,pivot-1);
  quick_sort(arr,pivot+1,end);
     
    //right side
  }
}

int main() {
    
vector<int>arr={10,2,11,21,15,3,10};
vector<int>::iterator it;

quick_sort(arr,0,arr.size()-1);
for(auto it=arr.begin();it != arr.end();it++){
    cout<<*it<<" ";
}
cout<<endl;
    return 0;
}