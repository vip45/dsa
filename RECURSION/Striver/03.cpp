#include "bits/stdc++.h"
using namespace std;
int add(int n)
{
    if (n < 1)
    {
        return 0;
    }
    int sum = n + add(n-1);

    return sum;
}
int main()
{
    int n = 10;
    int sum = add(n);
    cout <<endl<<"Value :"<< sum << endl;
}