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

int height(node  *root) {
    if (root == NULL)
        return 0;

    int leftHeight = height(root->left);
    int rightHeight = height(root->right);

    return max(leftHeight, rightHeight) + 1;
}


int diameter(node *root){
    if (root == NULL){
       return 0;
    }
    int  case1=height(root->left)+height(root->right);
    int  case2=diameter(root->left);
    int case3=diameter(root->right);

    return max(case1,max(case1,case2));
}


int main() {
    
cout<<"enter the root node: ";
node *root=binarytree();

cout<<"diameter of the root is "<<diameter(root)<<endl;
    return 0;
}