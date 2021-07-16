#include <bits/stdc++.h>
using namespace std;
void reverse(string random)
{
    if (random.length() == 0)
    {
        return;
    }
    string res = random.substr(1);
    reverse(res);
    cout << random[0] << " ";
}
int main()
{
    string sahil = "sahil";
    reverse(sahil);

    return 0;
}