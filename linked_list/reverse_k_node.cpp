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
node *reverse(node *head, int key)
{
    node *previous = NULL;
    node *current = head;
    node *next_ptr;
    int count = 0;
    while (current != NULL && count < key)
    {
        next_ptr = current->next;
        current->next = previous;
        previous = current;
        current = next_ptr;
        count++;
    }
    if (next_ptr != NULL)
    {
        head->next = reverse(next_ptr, key);
    }
    return previous;
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
    reverse(head, 2);
    print_list(head);

    return 0;
}