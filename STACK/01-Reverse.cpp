#include "bits/stdc++.h"
using namespace std;

void print(stack<char> st)
{
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}
int main()
{
    string s = "abcde";
    stack<char> st;
    for (int i = 0; i < s.length(); i++)
    {
        st.push(s[i]);
    }
    
    for(int i=0;i<s.length();i++){
        s[i]=st.top();
        st.pop();
    }

    cout<<s<<endl;
}