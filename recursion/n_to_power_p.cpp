#include <bits/stdc++.h>
using namespace std;
int n_to_power_p(int base, int power)
{
    if (power == 1)
    {
        return base;
    }
    int prev = n_to_power_p(base, power - 1);
    return base * prev;
}
int main()
{
    int base = 2;
    int power = 3;
    cout << n_to_power_p(base, power);
    return 0;
}