#include "bits/stdc++.h"
using namespace std;
bool check(string str, int index, vector<string> &s)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (i != index && s[i].find(str) != string::npos)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    vector<string> s = {"mass", "as", "hero", "superhero"};

    vector<string> ss;

    for (int i = 0; i < s.size(); i++)
    {
        if (check(s[i], i, s))
        {
            ss.push_back(s[i]);
        }
    }

    for (int i = 0; i < ss.size(); i++)
    {
        cout << ss[i] << endl;
    }
}