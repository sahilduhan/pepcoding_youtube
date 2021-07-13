#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 5;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < row - i; j++)
        {
            cout << " ";
        }
        for (int k = 0; k <= i; k++)
        {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}