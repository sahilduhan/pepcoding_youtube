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
Node *delete_node(Node *root, int key)
{
    if (root == NULL)
    {
        return NULL;
    }
    if (key < root->data)
    {
        root->left = delete_node(root->left, key);
    }
    if (key > root->data)
    {
        root->right = delete_node(root->right, key);
    }
    else
    {
        if (root->right == NULL && root->left == NULL)
        {
        }
        if (root->left != NULL)
        {
            return root->left;
        }
        if (root->right != NULL)
        {
            return root->right;
        }
        else
            return NULL;
    }
    return root;
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

    return 0;
}