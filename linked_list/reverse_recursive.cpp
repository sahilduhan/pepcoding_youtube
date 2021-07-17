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
node *reverse_recursive(node *head)
{
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    node *new_head = reverse_recursive(head->next);
    head->next->next = head;
    head->next = NULL;

    return new_head;
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
    reverse_recursive(head);
    print_list(head);
    return 0;
}