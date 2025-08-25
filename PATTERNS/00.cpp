#include "bits/stdc++.h"
using namespace std;

int main()
{

    int n = 6;

    for (int i = 1; i <= n; i++)
    {
        for (int sp = 1; sp < n; sp++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < n; i++)
    {
        for (int sp = n - (i + 1); sp > 0; sp--)
        {
            cout << "  ";
        }
        for (int j = i + 1; j > 0; j--)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}
