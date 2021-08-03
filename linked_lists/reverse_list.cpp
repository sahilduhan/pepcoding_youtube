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
int size(linked_list_node *head)
{
    linked_list_node *temp = head;
    int count = 0;
    while (temp != NULL)
        count++;
    return count;
}

void reverse(linked_list_node *head)
{
    int left_index = head->data;
    int right_index = size(head) - 1;
    while (left_index < right_index)
    {
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
    // cout << get_node(head, 3);
    return 0;
}