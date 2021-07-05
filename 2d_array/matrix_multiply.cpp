#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row_1 = 3, col_1 = 3;
    int matrix_1[row_1][col_1] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int row_2 = 3, col_2 = 3;
    int matrix_2[row_2][col_2] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int result[row_1][col_2];
    if (col_1 == row_2)
    {
        int sum = 0;
        for (int i = 0; i < row_1; i++)
        {
            for (int j = 0; j < col_2; j++)
            {
                for (int k = 0; k < row_2; k++)
                {
                    sum += matrix_1[i][k] * matrix_2[k][j];
                }
                cout << sum << " " ;
            }
            cout << endl;
        }
    }
    else
    {
        cout << "Invalid" << endl;
    }
    return 0;
}