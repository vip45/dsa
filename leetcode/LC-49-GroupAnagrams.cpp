#include "bits/stdc++.h"
using namespace std; 
// class Solution
// {
// public:
//     int keyVal(string s)
//     {
//         int sum = 0;
//         for (char c : s)
//         {
//             if (c >= 'a' && c <= 'z')
//             {
//                 sum += c - 'a' + 1;
//             }
//         }
//         return sum;
//     }
//     vector<vector<string>> groupAnagrams(vector<string> &strs)
//     {
//         unordered_map<int, vector<string>> mp;

//         for (int i = 0; i < strs.size(); i++)
//         {
//             int key = keyVal(strs[i]);
//             mp[key].push_back(strs[i]);
//         }
//         vector<vector<string>> ans;

//         for (auto &it : mp)
//         {
//             ans.push_back(it.second);
//         }
//         return ans;
//     }
// };

