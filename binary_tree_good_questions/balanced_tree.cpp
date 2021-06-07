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
bool balanced = true;
int is_balanced(binary_tree_node *root)
{
    if (root == NULL)
    {
        return 0;
    }
    int left_height = is_balanced(root->left);
    int reight_height = is_balanced(root->right);

    int diffrenc = abs(left_height - reight_height);
    if (diffrenc > 1)
    {
        balanced = false;
    }
    int total_height = 1 + max(left_height, reight_height);
    return total_height;
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
    cout << is_balanced(root) << endl;
    cout << balanced;
    return 0;
}