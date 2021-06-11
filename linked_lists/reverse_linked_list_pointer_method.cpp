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
    while (temp->next != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
}
void print_reverse(linked_list_node *head, int size)
{
    linked_list_node *pre = NULL;
    linked_list_node *current = head;
    while (!current)
    {
        linked_list_node *next = current->next;
        current->next = pre;

        pre = current;
        current = next;
    }
    linked_list_node *temp = head;
    // linked_list_node*tail =
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
    print_reverse(head, 6);

    return 0;
}