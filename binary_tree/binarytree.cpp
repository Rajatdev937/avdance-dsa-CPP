#include <iostream>
using namespace std;


class node{
    public: 
    int data;
    node *left;
    node *right;

    node(int value){
         data=value;
         left=NULL;
         right=NULL;
    }
};

int main() {
    
node *root = new node(10); //created the root node 

root->left= new node(20);
root->right=new node(40);

root->left->left= new node(15);
root->left->right=new node(18);

root->right->left=new node(25);
root->right->right= new node(28);

    return 0;
}
