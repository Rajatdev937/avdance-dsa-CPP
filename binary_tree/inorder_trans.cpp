#include <iostream>
using namespace std;

class node{
public:
int data;
node *left,*right;


node(int value){
    data=value;
    left=right=NULL;
}
};


void inorder(node *root){
if (root==NULL){
return;
 }
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
}


node *binary(){
int x;
cin>>x;
if(x==-1){
    return NULL;
}
node *temp= new node(x);


cout<<"enter the left child of "<< x <<" : ";
temp->left=binary();

cout<<"enter the right child of "<<x<<" : ";
temp->right=binary();


return temp;
}

int main() {
cout<<"enter the root node: ";
node *root=binary();

cout<<"inorder transval: "<<endl;
inorder(root);

cout<<endl;
    return 0;
}