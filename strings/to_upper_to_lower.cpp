#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sahil = "SahIL";
    for (int i = 0; i < sahil.length(); i++)
    {
        if (sahil[i] >= 'a' && sahil[i] <= 'z')
        {
            sahil[i] -= 32;
        }
        cout << sahil[i] << " ";
    }
    for (int i = 0; i < sahil.length(); i++)
    {
        if (sahil[i] >= 'A' && sahil[i] <= 'Z')
        {
            sahil[i] += 32;
        }
        cout << sahil[i] << " ";
    }
    // using stl
    transform(sahil.begin(), sahil.end(), sahil.begin(), ::toupper);
    cout << sahil << endl;

    return 0;
}