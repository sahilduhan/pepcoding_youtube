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
int height_tree(binary_tree_node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    return 1 + max(height_tree(root->left), height_tree(root->right));
}
int diameter_tree(binary_tree_node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int option_1 = max(height_tree(root->left), diameter_tree(root->right));
    int option_2 = diameter_tree(root->right);
    int option_3 = diameter_tree(root->left);
    return 1 + max(option_1, max(option_2, option_3));
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
    cout << diameter_tree(root);
    return 0;
}