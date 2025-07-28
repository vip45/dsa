#include "bits/stdc++.h"
using namespace std;

int main()
{
    string s = "hellovipinIIIIIishere";
    cout << s << endl;
    for (char &ch : s)
    {
        ch = tolower(ch);
    }

    unordered_map<char, int> ans;
    map<char,int>mapans;
    char c;
    int count = 0;
    char mapc;
    int mapcount = 0;
    for (auto ch : s)
    {
        mapans[ch]++;
    }

    for (auto ch : s)
    {
        ans[ch]++;
    }


    for (auto it : ans)
    {
        cout << it.first << " = " << it.second << endl;
        if (it.second > count)
        {
            count = it.second;
            c = it.first;
        }
    }
    cout << "---------" << endl;

    for (auto it : mapans)
    {
        cout << it.first << " = " << it.second << endl;
        if (it.second > mapcount)
        {
            mapcount = it.second;
            mapc = it.first;
        }
    }

    cout << endl;
    cout << (char)toupper(mapc) << " appears " << mapcount << " times in string" << endl;
}
