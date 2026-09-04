// Preorder Traversal - ROOT -> LEFT -> RIGHT

#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *left, *right;

    node(int value)
    {
        data = value;
        left = right = NULL;
    }
};
// Preorder Traversal
void preorder(node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    preorder(root->left);
    preorder(root->right);
}

// Create Binary Tree
node *binarytree()
{
    int x;
    cin >> x;

    if (x == -1)
    {
        return NULL;
    }

    node *temp = new node(x);

    cout << "Enter left child of " << x << ": ";
    temp->left = binarytree();

    cout << "Enter right child of " << x << ": ";
    temp->right = binarytree();

    return temp;
}

int main()
{
    cout << "Enter the root node: ";

    node *root = binarytree();

    cout << "\nPreorder Traversal: ";
    preorder(root);

    cout << endl;

    return 0;
}