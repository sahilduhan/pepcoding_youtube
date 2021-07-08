#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row_1 = 4, col_1 = 4;
    int arr[row_1][col_1] = {{1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}, {1, 2, 3, 4}};
    int row_start = arr[0][0] - 1;
    int col_start = arr[0][0] - 1;
    int row_end = arr[row_1][col_1] - 1;
    int col_end = arr[row_1][col_1] - 1;
    for (int i = row_start; i < col_1; i++)
    {
        cout << arr[i][0] << " ";
    }
    

    return 0;
}