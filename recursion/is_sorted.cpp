#include <bits/stdc++.h>
using namespace std;
bool is_sorted(int *arr, int size)
{
    if (size == 1)
    {
        return true;
    }
    bool sorted = is_sorted(arr + 1, size - 1);
    return (arr[0] < arr[1] && sorted);
}
int main()
{
    int arr[] = {1, 2, 4, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << is_sorted(arr, size);
    return 0;
}