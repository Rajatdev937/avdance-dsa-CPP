#include <iostream>
#include <vector>
using namespace std;

class node{
public:
    int data;
    node *lt,*rt;

    node(int val){
        data=val;
        lt=rt=nullptr;
    }
};

node *insert(node* root ,int val){
    if(root == nullptr){
        return new node(val);
    }
    if(val <= root->data)
        root->lt = insert(root->lt, val);
    else
        root->rt = insert(root->rt, val);
    return root;
}

void inorder(node *root , vector<int>&arr){
 if(root==NULL){
    return ;
 }
inorder(root->lt,arr);
arr.push_back(root->data);
inorder(root->rt,arr);
}

bool two_sum(node *root , int k)
{
    vector<int>arr;
    inorder(root,arr);

int left=0;
int right=arr.size()-1;

while(left<right){
    int sum= arr[right]+arr[left];

    if(sum == k ){
    return true;
    }
    else if(sum < k){
        left++;}
    else{
        right--;
    }
}
    return false;
}
int main() {
    
 node* root = nullptr;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "\ninOrder Traversal: ";
    // print inorder traversal
    vector<int> vals;
    inorder(root, vals);
    for(size_t i=0;i<vals.size();++i){
        if(i) cout << " ";
        cout << vals[i];
    }
    cout << endl;


    int k;

    cout << "Enter target: ";
    cin >> k;

    if(two_sum(root, k)) {
        cout << "Pair exists" << endl;
    }
    else {
        cout << "Pair does not exist" << endl;
    }

    return 0;
}
