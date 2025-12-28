#include "bits/stdc++.h"
using namespace std;

void print(int s, int n, string name)
{
    if (s > n)
    {
        return;
    }
    cout << name <<s<< endl;
    print(s + 1, n, name);
    cout << name <<s<< endl;
}

int main()
{
    // cout << "Hello Vipin" << endl;
    int n = 5;
    print(1, n, "Vipin");
}