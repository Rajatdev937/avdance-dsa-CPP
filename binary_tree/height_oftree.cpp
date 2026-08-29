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
 
node *binarytree(){
int x;
cin>>x;
if(x==-1){
    return NULL;
}
node *temp=new node(x);

cout<<"enter the left child of "<<x<<":";
temp->left=binarytree();

cout<<"enter the right child of "<<x<<":";
temp->right=binarytree();

return temp;
}


int height_oftree(node *root){
if(root == NULL){
    return 0;
}
int left=height_oftree(root->left);
int right=height_oftree(root->right);

return max(left,right)+1;
}
int main() {
    
    cout<<"enter the root node: ";
    node *root =binarytree();

    cout<<"the  height of binarytree is: "<<height_oftree(root)<<endl;
  
    return 0;
}