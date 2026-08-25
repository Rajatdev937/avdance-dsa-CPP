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
        return NULL ;
    }
    node *temp= new node(x);

    cout<<"enter the left child of "<<x<<":";
    temp->left=binarytree();

    cout<<"enter the right child of "<<x<<":";
    temp->right=binarytree();
    return temp;
}

int  countleaf(node *root){
    if(root == NULL){
        return 0;
    }
    if(root->left== 0 && root->right==0){
        return 1;
    }
    int left=countleaf(root->left);
    int right=countleaf(root->right);

    return left + right;
}

int main() {
    
cout<<"enter the root node: ";
node *root=binarytree();

cout<<"number of  leaf nodes are : "<<countleaf(root)<<endl;

    return 0;
}