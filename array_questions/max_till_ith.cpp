#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 2, 54, 5, 6, 7, 8, 9};
    int maximum = INT_MIN;
    int number = 5;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < number; i++)
    {
        if (arr[i] > maximum)
        {
            maximum = arr[i];
        }
    }
    cout << maximum << endl;

    return 0;
}