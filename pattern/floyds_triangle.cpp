#include <bits/stdc++.h>
using namespace std;
int main()
{
    int row = 5, count = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << count << " ";
            /* code */
            count++;
        }

        cout << endl;
    }

    return 0;
}