#include <iostream>
using namespace std;

class node {
public:
    int data;
    node *left, *right;

    node(int value) {
        data = value;
        left = right = nullptr;
    }
};

// Insert into BST
node* insert(node *root, int value) {

    if (root == nullptr) {
        return new node(value);
    }

    if (value <= root->data) {
        root->left = insert(root->left, value);
    }
    else {
        root->right = insert(root->right, value);
    }

    return root;
}

// Iterative search
bool iterative_search(node *root, int key) {

    node *current = root;

    while (current != nullptr) {

        if (key == current->data) {
            return true;
        }

        if (key < current->data) {
            current = current->left;
        }
        else {
            current = current->right;
        }
    }

    return false;
}

// Inorder traversal
void inorder(node *root) {

    if (root == nullptr) {
        return;
    }

    inorder(root->left);
    cout << root->data << " ";
    inorder(root->right);
}

int main() {

    node *root = nullptr;

    int n, value, target;

    cout << "Enter the number of nodes: ";
    cin >> n;

    cout << "Enter the node values:\n";

    for (int i = 0; i < n; i++) {
        cin >> value;
        root = insert(root, value);
    }

    cout << "\nInorder traversal: ";
    inorder(root);

    cout << "\nEnter the value to search: ";
    cin >> target;

    if (iterative_search(root, target))
        cout << target << " is found" << endl;
    else
        cout << target << " is not found" << endl;

    return 0;
}