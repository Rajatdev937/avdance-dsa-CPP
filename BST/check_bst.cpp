#include <iostream>
#include<vector>
using namespace std;

class node{
public:

  int data;
  node *left,*right;

  node(int value){
    data=value;
    left=right=nullptr;
  }
};

void inorder(node *root,vector<int>v){
    if(root==nullptr){
        return;
    }
    inorder(root->left,v);
    v.push_back(root->data);
    inorder(root->right,v);
}
int checkbst(node *root){
vector<int>v;

inorder(root,v);

for(int i=0;i<v.size();i++){
    if(v[i]<=v[i-1])
    return 0;
}
return 1;
}
int main() {
    node* root = new node(50);

    root->left = new node(30);
    root->right = new node(70);

    root->left->left = new node(20);
    root->left->right = new node(40);

    root->right->left = new node(60);
    root->right->right = new node(80);

    if (checkbst(root))
        cout << "BST";
    else
        cout << "Not BST";

    return 0;
}