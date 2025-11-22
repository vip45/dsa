#include "bits/stdc++.h"
using namespace std;

int main()
{
    int arr[] = {1, 2, -35, 4, 5, -6, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    int start, end;
    int maxSum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int sum = 0;
            bool flag = false;
            for (int k = i; k <= j; k++)
            {
                if (arr[k] < 0)
                {
                    flag = true;
                    break;
                }
                sum += arr[k];
                // cout << arr[k] << " ";
            }
            if (!flag && (sum > maxSum))
            {
                maxSum = sum;
                start = i;
                end = j;
                cout << " sum = " << sum << endl;
            }
        }
    }

    cout << "HEllo : " << start << " " << end << endl;
    for (int i = start; i <= end; i++)
    {
        cout << arr[i] << " ";
    }
}