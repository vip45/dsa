#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 2, 3, 1, 4};
    int n = arr.size();

    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }
    int mx = 0;
    for (auto it : mp)
    {
        cout << it.first << " " << it.second << endl;

        if (it.second > mx)
        {
            mx = it.second;
        }
    }
    int sum = 0;
    for (auto it : mp)
    {
        if (it.second == mx)
        {
            sum += mx;
        }
    }
    cout << "Max : " << mx << endl;
    cout << sum << endl;
}