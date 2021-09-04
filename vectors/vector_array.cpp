#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cin >> num;
    vector<int> v[num];
    for (int i = 0; i < num; i++)
    {
        int vec_size;
        cin >> vec_size;
        for (int j = 0; j < vec_size; j++)
        {
            int x;
            cin >> x;
            v[i].push_back(x);
        }
    }
    // for (int i = 0; i < num; i++)
    // cout << v[i] << " ";

    return 0;
}