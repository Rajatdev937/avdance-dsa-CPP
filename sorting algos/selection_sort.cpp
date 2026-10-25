#include <iostream>
#include <vector>
using namespace std;

void selection_sort(vector<int>&arr,int n){
for(int i = 0 ; i<n-1 ; i++){
    int min_index=i;

    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[min_index])
        min_index=j;
    }
    swap(arr[i],arr[min_index]);
}

}
void display(vector<int>&arr){
    cout<<"sorted array: ";
    for(auto it=arr.begin();it != arr.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
}
 
    int main() {
     int n =7;
     vector<int>arr={11,2,67,54,23,33,8};

   cout<<"unsorted array: ";
    for(int i = 0 ; i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    selection_sort(arr,n);
     display(arr);
    return 0;
}