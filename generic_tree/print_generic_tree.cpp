#include <bits/stdc++.h>
using namespace std;
class tree_node
{
public:
    int data;
    vector<tree_node *> children;
    tree_node(int data)
    {
        this->data = data;
    }
};
void print_tree(tree_node *root)
{
    if (root == NULL)
    {
        return;
    }
    cout << root->data << " ";
    for (int i = 0; i < root->children.size(); i++)
    {
        print_tree(root->children[i]);
    }
}
int main()
{

    tree_node *root = new tree_node(10);
    tree_node *node_1 = new tree_node(1);
    tree_node *node_2 = new tree_node(2);
    tree_node *node_3 = new tree_node(3);
    tree_node *node_4 = new tree_node(4);
    tree_node *node_5 = new tree_node(5);
    tree_node *node_6 = new tree_node(6);
    tree_node *node_7 = new tree_node(7);
    tree_node *node_8 = new tree_node(8);
    tree_node *node_9 = new tree_node(9);
    tree_node *node_10 = new tree_node(10);
    tree_node *node_11 = new tree_node(11);
    root->children.push_back(node_1);
    root->children.push_back(node_2);
    root->children.push_back(node_3);
    root->children.push_back(node_4);
    root->children[0]->children.push_back(node_6);
    root->children[0]->children.push_back(node_7);
    root->children[2]->children.push_back(node_8);
    root->children[3]->children.push_back(node_9);
    root->children[3]->children.push_back(node_10);
    root->children[3]->children.push_back(node_11);
    print_tree(root);
    return 0;
}