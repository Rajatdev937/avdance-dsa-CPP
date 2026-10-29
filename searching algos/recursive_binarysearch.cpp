#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int binary_search(vector<int>&arr,int low , int high,int target){
   

    if(low>high){
        return -1;
    }
int mid=low+(high-low)/2;
if(arr[mid]==target){
    return mid; 
}
else if(arr[mid]<target){
  return binary_search(arr,mid+1,high,target);
}
else{
    return binary_search(arr,low,mid-1,target);
}

}

int main() {
    
  vector<int>arr;
  arr={10,40,5,3,55,11,76,9,43};

  sort(arr.begin(),arr.end());

  int target;
  cout<<"enter the target value; ";
  cin>>target;

  int index=binary_search(arr,0,arr.size()-1,target);



if(index=-1){
    cout<<"element founded at";
}

    return 0;
}