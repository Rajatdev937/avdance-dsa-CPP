#include <iostream>
#include <queue>
using namespace std;

class node{
public:
    int data;
    node *left, *right;

    node(int value){
        data = value; 
        left = right = nullptr;
    }
};

bool recursive_search(node *root, int target){
    if (root == nullptr){
        return false;
    }
    if (root->data == target){
        return true;
    }
    if (target < root->data){
        return recursive_search(root->left, target);
    }
    return recursive_search(root->right, target);
}
// Insert into BST

    node* insert(node* root, int value){
        if(root == nullptr){
        return new node(value);
    }
        if (value <= root->data){
        root->left = insert(root->left,value);
    }
        else if (value > root->data){
        root->right = insert(root->right, value);
    }
    
           return root;
}
//inorder transversal

void inorder(node  *root){
    if(root==NULL){
        return ;
    }
   inorder(root->left);
    cout<<root->data<<" ";
   inorder(root->right);
    
}

int main() {
    
node *root= nullptr;

int n,value,target;

cout<<"enter the number of  nodes: ";
cin>>n;

cout<<"enter the node values:\n";
for(int i=0;i<n;i++){
    cin>>value;
    root=insert(root,value);
}

cout<<"\n  inorder transversal: ";
inorder(root);

cout<<"\nenter the value to recursive_search: ";
cin>>target;


if(recursive_search(root,target))
cout<<target <<" is found"<<endl;
else 
cout<<target<< " is not found"<<endl;
    return 0;
}