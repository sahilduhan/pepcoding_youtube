#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data = data;
        left = NULL;
        right = NULL;
    }
};
Node *Constructor(int *arr, int low, int high)
{
    if (low > high)
    {
        return;
    }
    int mid = low + high / 2;
    Node *root = new Node(arr[mid]);
    int data = arr[mid];
    Node *left_child = Constructor(arr, low, mid - 1);
    Node *right_child = Constructor(arr, high, mid + 1);
    return root;
}
int main()
{
    int arr[] = {1, 2, 3, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);

    return 0;
}