#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 5;
    for (int i = row; i > 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "*"
                 << " ";
        }
        cout << endl;
    }

    return 0;
}