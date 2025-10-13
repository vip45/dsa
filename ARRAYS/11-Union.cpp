#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a1[5] = {1, 2, 2, 3, 3};
    int a2[4] = {3, 4, 5, 5};

    set<int> sp;
    for (int i = 0; i < 5; i++)
    {
        sp.insert(a1[i]);
    }

    for (int i = 0; i < 4; i++)
    {
        sp.insert(a2[i]);
    }

    vector<int> unionArray;

    for (auto val : sp)
    {
        unionArray.push_back(val);
    }
    int n = unionArray.size();
    for(int i=0;i<n;i++){
        cout<<unionArray[i]<<" ";
    }
}