#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<pair<int, int>> v;
    int size = 3;
    for (int i = 0; i < size; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back(make_pair(x, y));
    }
    for(int i = 0; i < size; i++) cout << v[i].first<<" " << v[i].second<<endl;
    return 0;
}