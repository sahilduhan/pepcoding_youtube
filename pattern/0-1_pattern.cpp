#include <bits/stdc++.h>
using namespace std;
int main()
{
    int rows = 5;
    for (int i = 0; i < rows; i++)
    {
        // int sum = 0;
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout << "1"
                     << " ";
            }
            else
                cout << "0"
                     << " ";
        }
        cout << endl;
    }

    return 0;
}