#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 4, col = 4;
    int arr[row][col] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int i, j, k, l;
    int temp = arr[i][j];
    for (int i = 0; i < col; i++)
    {
        for (int j = 0; j < row; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}