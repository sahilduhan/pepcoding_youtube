#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
    ~Node();
};
Node *remove_duplicate_node(Node *head)
{
    Node *temp = head;
    Node *next_val = head->next;
    while (temp && next_val)
    {
        if (temp->data != next_val->data)
        {
            Node *new_node = new Node(temp->data);
            new_node->next = NULL;
        }
    }
    // return new_node;
}
int main()
{
    Node *head = new Node(100);
    Node *second = new Node(200);
    Node *third = new Node(200);
    Node *fourth = new Node(400);
    Node *fifth = new Node(400);
    Node *sixth = new Node(600);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;

    return 0;
}