#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<vector<int>> sahil;
    int N;
    cin >> N;
    for (int i = 0; i < N; i++)
    {
        int size = 0;
        cin >> size;
        vector<int> temp;
        for (int j = 0; j < size; j++)
        {
            int x;
            cin >> x;
            temp.push_back(x);
        }
        sahil.push_back(temp);
    }
    return 0;
}