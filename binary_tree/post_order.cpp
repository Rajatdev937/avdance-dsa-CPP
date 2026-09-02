#include <iostream>
using namespace std;

class node{
public:
    int data;
    node *left, *right;
node(int value){
    data=value;
    left=right=NULL;
}
};

void postorder(node *root){
    if(root == NULL){
        return;
    }

    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}

node *binary(){
   int x;
   cin>>x;
   if(x==-1){
   return NULL;}
   node *temp = new node(x);

 cout<<"enter the left child of "<<x<<" : ";
 temp->left= binary();
 cout<<"enter the right child of "<<x<<" : "; 
 temp->right= binary();
}

int main() {
    cout<<"enter the root node: ";
    node *root = binary();

    cout<<"\n postorder transversal: ";
    postorder(root);

    cout<<endl;
    return 0;
}