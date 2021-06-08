#include <bits/stdc++.h>
using namespace std;
class linked_list_node
{
public:
    int data;
    linked_list_node *next;
    linked_list_node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void insert_at_head(linked_list_node *head, int idata)
{
    linked_list_node *new_node = new linked_list_node(idata);
    
    new_node->data = idata;
    new_node->next = head;
    head = new_node;
}

void print_list(linked_list_node *head)
{
    linked_list_node *temp = head;
    while (temp->next != NULL)
    {
        cout << temp->next->data << " ";
        temp = temp->next;
    }
}

int main()
{

    linked_list_node *head = new linked_list_node(100);
    linked_list_node *second = new linked_list_node(200);
    linked_list_node *third = new linked_list_node(300);
    linked_list_node *fourth = new linked_list_node(400);
    linked_list_node *fifth = new linked_list_node(500);
    linked_list_node *sixth = new linked_list_node(600);
    head->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = NULL;
    insert_at_head(head, 3);
    print_list(head);
    return 0;
}