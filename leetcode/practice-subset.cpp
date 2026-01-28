#include "bits/stdc++.h"
using namespace std;
void rec(int index, vector<char> &str, string output, vector<string> &ans)
{
    if (index == str.size())
    {
        if(output=="")return;
        ans.push_back(output);
        return;
    }

    rec(index + 1, str, output, ans);
    rec(index + 1, str, output + str[index], ans);
}
int main()
{
    cout << "Hello World!" << endl;
    vector<char> str = {'a', 'b', 'c'};
    vector<string> ans;

    rec(0, str, "", ans);
    for (auto &s : ans)
    {
        cout << s << endl;
    }
}