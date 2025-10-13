#include "bits/stdc++.h"
using namespace std;

bool validPara(string s, int n)
{
    stack<char> stack;
    for (int i = 0; i < n; i++)
    {
        char ch = s[i];
        if (ch == '{' || ch == '[' || ch == '(')
        {
            stack.push(ch);
        }
        else
        {
            if (stack.empty())
            {
                return false;
            }
            if ((ch == '}' && stack.top() == '{') || (ch == ']' && stack.top() == '[') || (ch == ')' && stack.top() == '('))
            {
                stack.pop();
            }
            else
            {
                return false;
            }
        }
    }
    return stack.empty() ? true : false;
}

int main()
{
    string s = "{(])}";
    int n = s.size();
    cout << n << endl;

    if (validPara(s, n))
    {
        cout << "Valid" << endl;
    }
    else
    {
        cout << "Invalid" << endl;
    }
}