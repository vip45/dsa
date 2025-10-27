#include "bits/stdc++.h"
using namespace std;

int main()
{
    int arr[5] = {1, 2, 33, 4, -55};
    int sum = 0;
    int curr=0;
    for (int i = 0; i < 5; i++)
    {
        curr+=arr[i];
        if(curr<0)curr=0;
        sum=max(curr,sum);

    }
    cout << sum;
}