#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
Node *add_node(Node *root, int val)
{
    if (root == NULL)
    {
        Node *new_node = new Node(val);
    }
    if (val < root->data)
    {
        root->left = add_node(root->left, val);
    }
    else if (val > root->data)
    {
        root->right = add_node(root->right, val);
    }
    return root;
}
void print_tree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    print_tree(root->left);
    print_tree(root->right);
}
int main()
{
    Node *root = new Node(40);
    //left side of the tree

    root->left = new Node(20);
    root->left->left = new Node(10);
    root->left->right = new Node(30);
    root->left->right->left = new Node(25);
    root->left->right->right = new Node(35);

    // right side of the tree

    root->right = new Node(60);
    root->right->left = new Node(50);
    root->right->right = new Node(70);
    root->right->right->right = new Node(80);
    add_node(root, 1000);
    print_tree(root);
    return 0;
}