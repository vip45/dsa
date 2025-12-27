#include <bits/stdc++.h>
using namespace std;

void lar(int nums[], int n, int &target)
{
    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        if (nums[i] > mx)
            mx = nums[i];
    }

    // remove this max from array
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == mx)
        {
            nums[i] = INT_MIN;
        }
    }

    target = mx;
}

int main()
{
    int nums[6] = {3, 2, 1, 5, 6, 4};
    int n = 6;
    int k = 2;
    int target;

    for (int i = 0; i < k; i++)
    {
        lar(nums, n, target);
    }

    cout << target << endl; // ✅ Output: 5
}
