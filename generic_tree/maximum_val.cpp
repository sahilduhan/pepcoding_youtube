#include <bits/stdc++.h>
using namespace std;
class Tree_node
{
public:
    int data;
    vector<Tree_node *> children;
    Tree_node(int data)
    {
        this->data = data;
    }
};
int maximum(Tree_node *root)
{
    int max_num = INT_MIN;

    if (root == NULL)
    {
        return 0;
    }
    for (int i = 0; i < root->children.size(); i++)
    {
        int max_val = maximum(root->children[i]);
        if (max_val > max_num)
        {
            max_num = max_val;
        }
    }
    return max_num;
}
int main()
{
    Tree_node *root = new Tree_node(10);
    Tree_node *node_1 = new Tree_node(1);
    Tree_node *node_2 = new Tree_node(2);
    Tree_node *node_3 = new Tree_node(3);
    Tree_node *node_4 = new Tree_node(4);
    Tree_node *node_5 = new Tree_node(5);
    Tree_node *node_6 = new Tree_node(6);
    Tree_node *node_7 = new Tree_node(7);
    Tree_node *node_8 = new Tree_node(8);
    Tree_node *node_9 = new Tree_node(9);
    Tree_node *node_10 = new Tree_node(10);
    Tree_node *node_11 = new Tree_node(11);
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
    cout << maximum(root);
    return 0;
}