#include <bits/stdc++.h>
using namespace std;
int sum_to_nth(int num)
{
    if (num == 0)
    {
        return 1;
    }
    int prev = sum_to_nth(num - 1);
    return prev + num;
}
int main()
{
    int num = 10;
    cout << sum_to_nth(num);

    return 0;
}