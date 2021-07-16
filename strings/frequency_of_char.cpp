#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sahil = "afadfajvvaibqenfa";
    int freq[26];
    for (int i = 0; i < 26; i++)
    {
        freq[i] = 0;
    }
    for (int i = 0; i < sahil.size(); i++)
    {
        freq[sahil[i] - 'a']++;
    }
    int ans = 'a';
    int maxF = 0;
    for (int j = 0; j < 26; j++)
    {
        if (freq[j] > maxF)
        {
            maxF = freq[j];
            ans = j + 'a';
        }
    }

    cout << ans << endl;
    return 0;
}