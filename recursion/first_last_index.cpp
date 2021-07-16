#include <bits/stdc++.h>
using namespace std;
int first_last_index(int *arr, int size, int i, int key)
{
    if (i == size)
    {
        return -1;
    }
    if (i == key)
    {
        return i;
    }
    return first_last_index(arr, size, i + 1, key);
}
int main()
{
    int arr[] = {1, 3, 4, 5, 6, 7, 8, 9, 4, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << first_last_index(arr, size, 0, 4);
    return 0;
}