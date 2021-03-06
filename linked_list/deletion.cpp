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
void print_list(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void delete_at_n(node *head, int key)
{

    node *temp = head;
    if (temp == NULL)
    {
        return;
    }
    while (temp->next->data != key)
    {
        temp = temp->next;
    }
    node *current = temp;
    node *next_node = temp->next->next;
    current->next = next_node;
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
    delete_at_n(head, 300);
    print_list(head);
    return 0;
}