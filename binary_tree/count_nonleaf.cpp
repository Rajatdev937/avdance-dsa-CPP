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

int  count_nonleaf(node *root){
    if(root == NULL ){
        return 0;
    }
    if(root->left== 0 && root->right == 0){
        return 0;
    }

    int left=count_nonleaf(root->left);
    int right=count_nonleaf(root->right);

    return left+right+1;
}

int main() {
    
cout<<"enter the root node: ";
node *root=binarytree();

cout<<"number of non leaf nodes are : "<<count_nonleaf(root)<<endl;

    return 0;
}