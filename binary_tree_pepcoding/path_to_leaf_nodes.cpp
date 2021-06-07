#include <bits/stdc++.h>
using namespace std;
class binary_tree_node
{
public:
    int data;
    binary_tree_node *left;
    binary_tree_node *right;
    binary_tree_node(int data)
    {
        this->data = data;
        left = right = NULL;
    }
};
void leaf_node(binary_tree_node *root)
{
    if (root == NULL)
    {
        return;
    }
    if (root->left == NULL && root->right == NULL)
    {
        cout << root->data << " ";
    }
    leaf_node(root->left);
    leaf_node(root->right);
}
int main()
{

    binary_tree_node *root = new binary_tree_node(18);

    //left side of the tree

    root->left = new binary_tree_node(15);
    root->right = new binary_tree_node(30);
    root->left->left = new binary_tree_node(40);
    root->left->right = new binary_tree_node(50);
    root->left->left->left = new binary_tree_node(8);
    root->left->left->right = new binary_tree_node(7);
    root->left->right->left = new binary_tree_node(9);
    // root->left->left->right->right = new binary_tree_node(13);
    // root->left->right->left = new binary_tree_node(8);

    //right side of the tree

    root->right->left = new binary_tree_node(100);
    root->right->right = new binary_tree_node(40);
    // root->right->right->left = new binary_tree_node(11);
    // root->right->right->right = new binary_tree_node(12);
    leaf_node(root);

    return 0;
}