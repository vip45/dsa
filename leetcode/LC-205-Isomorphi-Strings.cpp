#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    bool isIsomorphic(string s, string t)
    {
        unordered_map<char,int>mp;
        unordered_map<char,int>mp2;

        for(char c:s){
            mp[c]++;
        }
        for(char c:t){
            mp2[c]++;
        }
        vector<int>arr1;
        vector<int>arr2;

        for(auto it:mp){arr1.push_back(it.second);};
        for(auto it:mp2){arr2.push_back(it.second);};

        if(arr1.size()!=arr2.size()){return false;}
        sort(arr1.begin(),arr1.end());
        sort(arr2.begin(),arr2.end());
        for(int i=0;i<arr1.size();i++){
            if(arr1[i]!=arr2[i]){
                return false;
            }
        }

        return true;
    }
};

int main()
{
    Solution obj;
    if (obj.isIsomorphic("add", "egg"))
    {
        cout << "this is isomorphic";
    }
    else
    {
        cout << "this is not isomorphic";
    }
}