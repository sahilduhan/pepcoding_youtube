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
    if (root == NULL) return;
    cout << root->data << " ";
    print_tree(root->left);
    print_tree(root->right);
}
int main()
{
     Node *root = new Node(10);

    //left side of the tree

    root->left = new Node(1);
    root->right = new Node(2);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->left->left->right = new Node(7);
    root->left->left->right->right = new Node(13);
    root->left->right->left = new Node(8);

    return 0;
}