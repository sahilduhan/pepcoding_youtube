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
void print_tree(Node *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    print_tree(root->left);
    print_tree(root->right);
}
int least_common_ancestor(Node *root, int d1, int d2)
{
    if (root == NULL)
        return 0;
    if (d1 < root->data && d2 < root->data)
        return least_common_ancestor(root->left, d1, d2);
    else if (d1 > root->data && d2 > root->data)
        return least_common_ancestor(root->right, d1, d2);
    else
        return root->data;
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
    print_tree(root);
    cout << least_common_ancestor(root, 10, 80);
    return 0;
}