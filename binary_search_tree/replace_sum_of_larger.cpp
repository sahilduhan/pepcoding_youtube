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
    print_tree(root->left);
    cout << root->data << " ";
    print_tree(root->right);
}
int sum = 0;
void replace(Node *root)
{
    if (root == NULL)
        return;
    int data;
    replace(root->right);
    data = root->data;
    root->data = sum;
    sum += data;
    replace(root->left);
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
    replace(root);
    print_tree(root);
    return 0;
}