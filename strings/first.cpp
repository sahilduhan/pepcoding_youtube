#include <bits/stdc++.h>
using namespace std;
int main()
{

    string str = "sahil";
    cout << str << endl;
    string str_2(5, 's');
    cout << str_2 << endl;
    cout << str.compare(str_2) << endl;
    string sahil = "sahil is god";
    sahil.empty();
    cout << sahil << endl;
    // string sam;
    // getline(cin, sam);
    // cout << sam << endl;
    string sam;
    sam = "sahil duhan";
    // sam.erase(0, 3);
    cout << sam << endl;
    cout << sam.find("duh") << endl;
    sam.insert(0, "sam");
    cout << sam << endl;
    cout << sam.size() << endl;

    for (int i = 0; i < sam.length(); i++)
    {
        cout << sam[i] << endl;
    }
    // numeric value to a string
    string sah = "134";
    int x = stoi(sah);
    cout << x + 2 << endl;
    // string to a numeric value
    int y = 21;
    cout << to_string(y) + "53" << endl;
    // sorting a string using stl
    string wazir = "safabuvbefkjac";
    sort(wazir.begin(), wazir.end());
    cout << wazir << endl;
    return 0;
}