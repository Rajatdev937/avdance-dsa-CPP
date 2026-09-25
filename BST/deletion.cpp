#include <iostream>
#include  <queue>
using namespace std;

class node{
public:
    int data;
    node *left, *right;

    node(int value){
        data = value;
        left = right = nullptr;
    }
};


node *deletenode(node *root,int value){
    if(root == NULL){
        return NULL;
    }

    if(value < root->data){
        root->left = deletenode(root->left, value);
    }
    else if(value > root->data){
        root->right = deletenode(root->right, value);
    }
    else{
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }
        else if(root->left == NULL){
            node *temp = root->right;
            delete root;
            return temp;
        }
        else if(root->right == NULL){
            node *temp = root->left;
            delete root;
            return temp;
        }
        else{
            node *successor = root->right;
            while(successor->left != NULL){
                successor = successor->left;
            }
            root->data = successor->data;
            root->right = deletenode(root->right, successor->data);
        }
    }

    return root;
}


node *insert(node *root, int value){
        if(root == nullptr){
            return new node(value);
        }
        if(value <= root->data){
            root->left = insert(root->left, value);
        }
        else{
            root->right = insert(root->right, value);
        }
        return root;
    }



int main() {
    return 0;
}