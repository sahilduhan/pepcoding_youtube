#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr[] = {1, 3, 2, 4};
    stack<int> ans;
    int size = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < size; i++) ans.push(arr[i]);
    for (int i = 0; i < ans.size(); i++){
        cout<<ans.top()<<" "<<endl;
        ans.pop();
    }
    
    return 0;
}