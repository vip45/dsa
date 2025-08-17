#include "bits/stdc++.h"
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 1, 1, 1, -1, 1, 4, 2, 3};
    int size = sizeof(arr) / sizeof(arr[0]);
    int count = 0;
    int target = 3;

    for (int i = 0; i < size; i++)
    {
        for (int j = i; j < size; j++)
        {
            int sum = 0;
            int curr = 0;

            for (int k = i; k <= j; k++)
            {
                cout << arr[k] << " ";
                sum += arr[k];
                curr = j - i + 1;
            }

            if (sum == target)
            {
                
                count = max(curr, count);
            }
            cout << "= " << sum << endl;
        }
    }

    cout << endl
         << "the maximum subarry length with sum " << target << " is " << count << endl;
}
