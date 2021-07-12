#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 4, col = 4;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (i == 0 || i == row || j == 0 || j == col)
            {
                cout << "*";
            }
            else
            {
                cout << "\t";
            }
        }
        cout << endl;
    }

    return 0;
}