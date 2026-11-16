#include <iostream>
#include <vector>
using namespace std;

bool pairdiff(vector<int>&arr,int target ){
int left=0;
int right=1;

while(right<arr.size()){
    int diff=arr[right]-arr[left];

if(diff == target){
    return true;
}
else if(diff<target){
    right++;
}
else{
    left++;
}
if(left == right){
    right++;
}
}
return false;
}
int main() {
    
vector<int>arr={5,10,25,20,75,80};
int target=15;

if(pairdiff(arr,target)){
    cout<<"pair exist"<<endl;
}
else{
    cout<<"pair doesnt  exist"<<endl;
}
    return 0;
}