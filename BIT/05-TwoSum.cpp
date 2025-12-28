#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    unordered_map<int, int> mp;

    for (int i = 0; i < arr.size(); i++)
    {
        int val = target - arr[i];
        if (mp.find(val) != mp.end())
        {
            cout << "Answer : " << i << " " << mp[val] << endl;
        }
        mp[arr[i]] = i;
    }
}