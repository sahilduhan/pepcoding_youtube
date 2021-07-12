#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 5;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= row; j++)
        {
            if (j < row - i)
            {
                cout << " ";
            }
            else
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    return 0;
}