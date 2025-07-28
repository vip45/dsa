#include "bits/stdc++.h"
using namespace std;

int main()
{
    string name = "vipinyadavi";

    unordered_map<char, int> freq;

    for (char c : name)
    {
        freq[c]++;
        // cout << freq[c] << endl;
    }
    
    int i = 0;
    int count = -1;
    int ans;
    char ch;
    for (auto c : name)
    {
        if (freq[c] > count)
        {
            cout << c << " " << freq[c] << endl;
            ans = i;
            ch = c;
        }
        i++;
    }

    cout << ch << " ans=" << ans;
}