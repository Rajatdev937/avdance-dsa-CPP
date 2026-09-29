#include <iostream>
#include <queue>
using namespace std;
                    
class node {
public:
    int data;
    node *left,*right;

    node(int value){
    data = value;
    left = right = nullptr ;
    }
};
// Insert into BST

    node* insert(node* root, int value){
        if(root == nullptr){
        return new node(value);
    }
        if (value <= root->data){
        root->left = insert(root->left,value);
    }
        else if (value > root->data){
        root->right = insert(root->right, value);
    }
        return root;
}
// Level Order Traversal
void levelorder(node* root) {
    if (root == nullptr)
        return;

    queue<node*> q;
    q.push(root);

    while (!q.empty()) {
        node* temp = q.front();
        q.pop();

        cout << temp->data << " ";

        if (temp->left != nullptr)
            q.push(temp->left);

        if (temp->right != nullptr)
            q.push(temp->right);
    }
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

    cout << "\nLevel Order Traversal: ";
    levelorder(root);

    return 0;
}