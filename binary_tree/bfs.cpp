#include <iostream>
#include <queue>
using namespace std;

class node{
    public: 
     int data;
     node *left , *right;

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
node *temp =new node(x);
cout<<"enter the left child of "<<x<<" : ";
temp->left=binarytree();

cout<<"enter the right child of "<<x<<" : ";
temp->right=binarytree();
return temp;
}



void levelorder(node *root){
if(root == NULL){
return ;
}
queue<node*>q;

q.push(root);
while(!q.empty()){
node *temp=q.front();
q.pop();

cout<<temp->data<<" ";

if(temp->left!=NULL){
    q.push(temp->left);
}
if(temp->right!=NULL){
    q.push(temp->right);
}

}
}


int main() {
    cout<<"enter the root node: ";
    node *root=binarytree();

    cout<<"level order transversal(bsf): ";
    levelorder(root);

    return 0;
}