#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        next = NULL;
    }
};
void insert_at_last(node *head, int data)
{
    node *new_ndoe = new node(data);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_ndoe;
    new_ndoe->next = NULL;
}
void print_list(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void insert_at_head(node *head, int data)
{
    if (head == NULL)
    {
        return;
    }
    node *new_node = new node(data);
    new_node->next = head;
    head = new_node;
}
int main()
{
    node *head = new node(100);
    node *second = new node(200);
    node *third = new node(300);
    node *fourth = new node(400);
    node *fifth = new node(500);
    node *sixth = new node(600);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    // insert_at_last(head, 12);
    print_list(head);
    insert_at_head(head, 12);
    return 0;
}