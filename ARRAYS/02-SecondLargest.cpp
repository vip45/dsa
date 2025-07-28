#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> arr = {12, 5, 7, 20, 9, 20};
    int n = arr.size();

    int maxi = INT_MIN;
    int smaxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            smaxi = maxi;
            maxi = arr[i];
        }
        else if (arr[i] > smaxi && arr[i] != maxi)
        {
            smaxi = arr[i];
        }
    }

    cout << smaxi << endl;
}