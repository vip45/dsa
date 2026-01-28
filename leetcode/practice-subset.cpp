#include "bits/stdc++.h"
using namespace std;
void rec(int index, vector<char> &str, string output)
{
    if (index == str.size())
    {
        cout << output << endl;
        return;
    }
    rec(index + 1, str, output);
    rec(index + 1, str, output+str[index]);
}
int main()
{
    cout << "Hello World!" << endl;
    vector<char>str={'a','b','c'};


    rec(0,str,"");
}