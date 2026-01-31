#include "bits/stdc++.h"
using namespace std;

class Solution
{
public:
    void ansVec(int num, int index, vector<int> &nums, vector<int> &ans)
    {
        int end = nums.size() - 1;
        while (end >= 0)
        {
            if (nums[end] == num)
            {
                break;
                return;
            }
            if (nums[end] > num)
            {
                ans[index] = nums[end];
            }
            end--;
        }
    }
    vector<int> nextGreaterElement(vector<int> &nums1, vector<int> &nums2)
    {
        vector<int> ans(nums1.size(), -1);
        for (int i = 0; i < nums1.size(); i++)
        {
            ansVec(nums1[i], i, nums2, ans);
        }
        return ans;
    }
};