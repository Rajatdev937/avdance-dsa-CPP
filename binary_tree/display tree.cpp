#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *left;
    node *right;

node(int value){
    data=value;
   left=right=NULL;
}
};


node *binarytree(){

int x;
 cin>>x;
 if(x==-1)
return NULL;
node *temp= new node(x);

cout<<"enter left child of "<< x <<":";
temp->left=binarytree();//recursive call

cout<<"enter right child of "<< x <<":";
temp->right=binarytree();//recursive call

return temp;
}


int main() {
cout<<"enter the root node: ";
  node *root =binarytree();

    return 0;
}