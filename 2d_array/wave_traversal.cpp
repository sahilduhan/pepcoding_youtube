#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 3;
    int col = 3;
    int array[row][col] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    for (int i = 0; i < col; i++)
    {
        if (i % 2 == 0)
        {
            for (int j = 0; j < row; j++)
            {
                cout << array[i][j] << " ";
            }
        }
        else
        {
            for (int k = row - 1; k >= 0; k--)
            {
                cout << array[i][k] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}