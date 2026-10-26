#include <iostream>
#include <vector>
using namespace std;

int linear_search(vector<int>&arr,int target){
for(auto it =arr.begin() ; it != arr.end() ; it++){
if(*it==target)
return  it - arr.begin();
}    
return -1 ;
}
int main() {
    vector<int>arr={10,3,4,5,6,7,8,11,32,55,2,10};
    vector<int> :: iterator it ;

    int target;
    cout<<"enter a target value: ";
    cin>>target;

  int index;
  index=linear_search(arr,target);

 if(index != -1){
    cout<<"element founded at "<<index<<endl;
 }
 else{
    cout<<"element not founded"<<endl;
 }
 return 0;
}
//time complexity - O(n)
//space complexity - O(1)