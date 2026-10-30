#include <iostream>
#include<vector>
using namespace std;

vector<int> sortedsq(vector<int>&arr){

int n=arr.size();

vector<int>ans(n);

int left=0;
int right=n-1;
for(int i=n-1;i>=0;i--){
    if(abs(arr[left])>abs(arr[right])){
        ans[i]=arr[left]*arr[left];
        left++;
    }
    else{
        ans[i]=arr[right]*arr[right];
        right--;
    }
}
return ans;
}

int main() {
    
    vector<int>arr={-5,-1,0,5,10};

    vector<int>ans=sortedsq(arr);

    cout<<"sorted array: "<<endl;
    for(int x : ans){
        cout<<x<<" ";
    }

    return 0;
}