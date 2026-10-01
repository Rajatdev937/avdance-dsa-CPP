#include <iostream>
using namespace std;

class node{
    public:
    int data;
    node *left,*right;

    node(int value){
        data=value;
        left = right = nullptr;
    }
};

//INSERT INTO BST

 node *insert(node* root ,int value){
    if(root == nullptr){
        return  new node(value);
}
  if(value <= root->data){
    root->left=insert(root->left,value);
  }
 else if(value >= root->data){
    root->right=insert(root->right,value);
  }
  return root;
}

void inorder(node *root){
if (root==NULL){
return;
 }
 inorder(root->left);
 cout<<root->data<<" ";
 inorder(root->right);
}

node* lca(node* root,int p,int q){
while(root!=NULL){
if(p < root->data && q < root->data){
root=root->left;
}
else if(p > root->data &&  q > root->data){
root=root->right;
}
else{
    return root;
}
}
return NULL;
}

int main() {
    
    node* root = nullptr;
    int n, value;

    cout << "Enter number of nodes: ";
    cin >> n;

    cout << "Enter values:\n";
    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "\nInorder transversal: ";
    inorder(root);

    int p,q;
    cout<<"\nenter 1st node for lca: ";
    cin>>p;
    cout<<"\nenter 2nd node for lca: ";
    cin>>q;

    node* ans=lca(root,p,q);

    if(ans != NULL){
        cout<<"LCA of "<<p<<" & "<<q<<" is: "<<ans->data<<endl;

    }

    return 0;
}