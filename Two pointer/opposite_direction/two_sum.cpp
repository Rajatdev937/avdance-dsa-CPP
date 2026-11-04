#include <iostream>
#include <vector>
using namespace std;

vector<int> two_sum(vector<int>&arr,int target){
int left=0;
int right=arr.size()-1;

while(left<right){
    int sum=arr[right]+arr[left];

if(sum == target){
    return{left,right};
}
else if(sum < target){
    left++;
}
else{
    right--;
}
}
}

int main() {
    
 vector<int>arr={3,8,10,15,20};
 int target=25;

 vector<int> ans=two_sum(arr,target);


    if (!ans.empty()) {
        cout << "Indices: " << ans[0] << " " << ans[1] << endl;
    }
    else {
        cout << "No pair found" << endl;
    }
    return 0;
}