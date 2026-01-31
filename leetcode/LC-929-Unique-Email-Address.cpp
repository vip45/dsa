#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
        string createKey(string &s)
        {
            string key = "";
            int i = 0;
            vector<int> freq(26, 0);
            while (i < s.length())
            {
                if (s[i] == '+' || s[i] == '@')
                {
                    break;
                }
                if (s[i] == '.')
                {
                    i++;
                }
                else
                {
                    freq[s[i] - 'a']++;
                    i++;
                }
            }

            key += "#";
            for (int it = 0; it < freq.size(); it++)
            {
                key += to_string(freq[it]);
            }
            int end = s.length() - 1;

            while (s[end] != '@')
            {
                key += s[end];
                end--;
            }

            return key;
        }
        int numUni(vector<string> &emails)
    {
        unordered_map<string, vector<string>> mp;
        for (string s : emails)
        {
            string key;
            key = createKey(s);
            // cout << key << endl;
            mp[key].push_back(s);
        }
        for (auto it : mp){
            for (auto &it : mp)
            {
                cout << it.first << " : ";
                for (auto &s : it.second)
                cout << s << " ";
                cout << endl;
            }
        }

        return mp.size();
    }
};

int main()
{
    Solution obj;
    vector<string> emails = {"test.email+alex@leetcode.com", "test.e.mail+bob.cathy@leetcode.com", "testemail+david@lee.tcode.com"};
    int ans = obj.numUni(emails);
    cout << ans;
}