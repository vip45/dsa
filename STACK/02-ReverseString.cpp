#include "bits/stdc++.h"
using namespace std;

int main()
{
    string str = "hello";

    stack<char> st;

    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << " ";
        st.push(str[i]);
    }
    int i = 0;
    str="";
    while (!st.empty())
    {
        str+= st.top();
        st.pop();
    }

    cout << endl
         << str << endl;
}