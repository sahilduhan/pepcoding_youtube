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
void print_list(linked_list_node *head)
{
    linked_list_node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void delete_at_n(linked_list_node *head, int adress)
{
    linked_list_node *temp = head;
    int count = 1;
    while (count != adress)
    {
        temp = temp->next;
        count++;
    }
    linked_list_node *a = temp->next;
    linked_list_node *b = a->next;
    temp->next = b;
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
    delete_at_n(head, 4);
    print_list(head);

    return 0;
}