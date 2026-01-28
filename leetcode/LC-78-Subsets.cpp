#include "bits/stdc++.h"
using namespace std;
void rec(int index,vector<int>nums,vector<int>&subarr,vector<vector<int>>&res)
{
    if(index==nums.size()){
        res.push_back(subarr);
        return;
    }
    subarr.push_back(nums[index]);
    rec(index+1,nums,subarr,res);
    subarr.pop_back();
    rec(index+1,nums,subarr,res);
}
int main(){
    vector<int>arr = {1,2,3};
    vector<int>subarr;
    vector<vector<int>>res;

    rec(0,arr,subarr,res);

    for (int i = 0; i < res.size(); i++)
    {
        cout << "{ ";
        for (int j = 0; j < res[i].size(); j++)
        {
            cout << res[i][j] << " ";
        }
        cout << "}" << endl;
    }
}