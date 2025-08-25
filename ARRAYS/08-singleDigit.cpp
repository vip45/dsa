#include "bits/stdc++.h"
using namespace std;

int main()
{
    int n = 468;
    cout << (n == 0 ? 0 : 1 + (n - 1) % 9) << endl;
}