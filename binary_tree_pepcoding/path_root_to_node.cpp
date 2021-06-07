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
bool is_found(binary_tree_node *root, int data)
{
    vector<binary_tree_node *> path;
    if (root == NULL)
    {

        return false;
    }
    if (root->data == data)
    {
        return true;
    }
    bool left = is_found(root->left, data);
    {
        if (left)
        {
            path.push_back(root->left);
            return true;
        }
    }
    bool right = is_found(root->right, data);
    {
        if (right)
        {
            path.push_back(root->left);
            return true;
        }
    }
    return false;
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
    cout << is_found(root, 13);
    return 0;
}