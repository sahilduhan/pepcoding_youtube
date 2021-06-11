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

    linked_list_node *head_2 = new linked_list_node(10);
    linked_list_node *second_2 = new linked_list_node(2008);
    linked_list_node *third_3 = new linked_list_node(3000);
    linked_list_node *fourth_4 = new linked_list_node(440);
    linked_list_node *fifth_5 = new linked_list_node(5050);
    linked_list_node *sixth_6 = new linked_list_node(6);
    head->next = second_2;
    second_2->next = third_3;
    third_3->next = fourth_4;
    fourth_4->next = fifth_5;
    fifth_5->next = sixth_6;
    sixth_6->next = NULL;

    return 0;
}