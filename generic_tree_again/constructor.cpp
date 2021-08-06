#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    vector<Node *> children;
    Node(int data)
    {
        this->data = data;
    }
};
void pre_order(Node *root)
{
    int count = 0;
    
}
int main()
{

    Node *root = new Node(10);
    Node *node_1 = new Node(1);
    Node *node_2 = new Node(2);
    Node *node_3 = new Node(3);
    Node *node_4 = new Node(4);
    Node *node_5 = new Node(5);
    Node *node_6 = new Node(6);
    Node *node_7 = new Node(7);
    Node *node_8 = new Node(8);
    Node *node_9 = new Node(9);
    Node *node_10 = new Node(10);
    Node *node_11 = new Node(11);
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
    return 0;
}