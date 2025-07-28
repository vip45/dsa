#include "bits/stdc++.h"
using namespace std;

int main()
{
    int arr[] = {1, 2, 1, 3, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    unordered_map<int, int> ans;
    for (auto i : arr)
    {
        ans[i]++;
    }

    for (auto it : ans)
    {
        cout << it.first << " " << it.second << endl;
    }
}