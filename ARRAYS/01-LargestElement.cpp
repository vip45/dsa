#include "bits/stdc++.h"
using namespace std;

int main()
{
    cout << "Hello World" << endl;
    vector<int> arr = {12, 5, 7, 20, 9, 20};

    int n = arr.size();

    int maxi = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > maxi)
        {
            maxi = arr[i];
        }
    }

    cout << maxi << endl;

}
