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
linked_list_node *remove_head(linked_list_node *head)
{
    int count = 1;
    linked_list_node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        count++;
    }
    if (count == 0)
    {
        cout << " empty " << endl;
    }
    else if (count == 1)
    {
        head == NULL;
        count = 0;
    }
    else
    {
        head = head->next;
        count--;
    }
    return head;
}
void print_list(linked_list_node *head)
{
    linked_list_node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
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
    // cout << size(head);
    remove_head(head);
    print_list(head);

    return 0;
}