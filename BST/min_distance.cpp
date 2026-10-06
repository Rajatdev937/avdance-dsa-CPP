#include <iostream>
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


int distance( node *root,int x){


     if(root->data == x){{
    return 0;
     }}
    if(x < root->data){
        return 1 + distance(root->left,x);
    }
    return 1+ distance(root->right,x);
}

int mindis(node *root ,int  a , int  b){
    if(a < root->data && b < root->data){
        return mindis(root->left,a,b);
    }
    if( a > root->data && b > root->data){
        return mindis(root->right,a,b);
    }

    return distance(root,a)+ distance(root,b);
}

int main() {
    
   node* root = new node(50);

    root->left = new node(30);
    root->right = new node(70);

    root->left->left = new node(20);
    root->left->right = new node(40);

    root->right->left = new node(60);
    root->right->right = new node(80);

    int a = 20;
    int b = 80;

    cout << "Minimum distance = "
         << mindis(root, a, b);

    return 0;
}