#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    int maxDifference(string s)
    {
        unordered_map<char, int> mp;
        for (char it : s)
        {
            mp[it]++;
        }

        int ans = INT_MIN;
        vector<int> store;
        for (auto it : mp)
        {
            store.push_back(it.second);
        }

        for (int oddNum : store)
        {
            if (oddNum % 2 == 1)
            {
                for (int evenNum : store)
                {
                    if (evenNum % 2 == 0)
                    {
                        ans = max(ans, oddNum - evenNum);
                    }
                }
            }
        }
        return ans;
    }
};