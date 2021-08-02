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
void print_in_range(Node *root, int num_1, int num_2)
{
    if (root == NULL)
        return;
    if (num_1 < root->data && num_2 < root->data)
        print_in_range(root->left, num_1, num_2);
    else if (num_1 > root->data && num_2 > root->data)
        print_in_range(root->right, num_1, num_2);
    else
    {
        print_in_range(root->left, num_1, num_2);
        cout << root->data << " ";
        print_in_range(root->right, num_1, num_2);
    }
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
    print_in_range(root, 40, 80);
    return 0;
}