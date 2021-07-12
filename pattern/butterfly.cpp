#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 5;
    for (int i = 0; i < row; i++)

    {
        for (int j = 0; j < i; j++)
        {
            cout << "*";
        }
        int space = 2 * row - 2 * i;
        for (int k = 0; k < space; k++)
        {
            cout << " ";
        }
        for (int l = 0; l < i; l++)
        {
            cout << "*";
        }
    }
    cout << endl;

    return 0;
}