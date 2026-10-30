#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binary_search(vector<int>&arr,int target){

int low=0;
int mid;
int high=arr.size()-1;

while(low<=high){
mid=low+(high-low)/2;
if(arr[mid]==target){
    return mid;
}
else if(arr[mid]<target){
    low=mid+1;
}
else{
     high=mid-1;
}

}

return -1;
}
int main() {
    int n;
    cout<<"enter the size of array: ";
    cin>>n;

    vector<int>arr(n);
    
     cout<<"enter the elements of array: ";
     for(auto it=arr.begin();it !=arr.end();it++){
         cin>>*it;
     }
  
     sort(arr.begin(),arr.end());
 int target;
 cout<<"enter the target element: ";
 cin>>target;


 int index=binary_search(arr,target);
if(index != -1){
    cout<<"element found at index "<<index;
}
else{
    cout<<"element not found "<<endl;
}

    return 0;
}