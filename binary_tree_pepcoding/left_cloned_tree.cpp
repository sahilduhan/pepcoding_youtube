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
binary_tree_node *left_cloned_tree(binary_tree_node *root)
{
    if (root == NULL)
    {
        return NULL;
    }
    binary_tree_node *left_cloned = left_cloned_tree(root->left);
    binary_tree_node *right_cloned = left_cloned_tree(root->right);
    binary_tree_node *new_node = new binary_tree_node(root->data);
    root->left = new_node;
    new_node->left = left_cloned;
    new_node->right = NULL;
    root->right = right_cloned;
    return root;
}

void print_tree(binary_tree_node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    print_tree(root->left);
    print_tree(root->right);
}
int main()
{
    binary_tree_node *root = new binary_tree_node(10);

    //left side of the tree

    root->left = new binary_tree_node(1);
    root->right = new binary_tree_node(2);
    root->left->left = new binary_tree_node(3);
    root->left->right = new binary_tree_node(4);
    root->left->left->right = new binary_tree_node(7);
    root->left->left->right->right = new binary_tree_node(13);
    root->left->right->left = new binary_tree_node(8);

    //right side of the tree

    root->right->left = new binary_tree_node(5);
    root->right->right = new binary_tree_node(6);
    root->right->right->left = new binary_tree_node(11);
    root->right->right->right = new binary_tree_node(12);
    left_cloned_tree(root);
    print_tree(root);
    return 0;
}