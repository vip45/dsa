#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> nums = {9, 9, 9};

    for (int i = nums.size() - 1; i >= 0; i--)
    {
        if (nums[i] != 9)
        {
            nums[i] += 1;
            break;
        }
        else
        {
            nums[i] = 0;
        }
    }
    if (nums.front() == 0)
    {
        nums.insert(nums.begin(), 1);
    }

    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}