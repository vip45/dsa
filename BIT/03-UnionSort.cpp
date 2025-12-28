#include "bits/stdc++.h"
using namespace std;
vector<int> unionSort(vector<int> &A, vector<int> &B)
{
    int i = 0;
    int j = 0;
    vector<int> result;

    while (i < A.size() && j < B.size())
    {
        if (A[i] < B[j])
        {
            if (result.empty() || result.back() != A[i])
                result.push_back(A[i]);
            i++;
        }
        else if (A[i] > B[j])
        {
            if (result.empty() || result.back() != B[j])
                result.push_back(B[j]);
            j++;
        }
        else
        {
            if (result.empty() || result.back() != A[i])
                result.push_back(A[i]);
            i++;
            j++;
        }
    }
    
    while (i < A.size())
    {
        if (result.empty() || result.back() != A[i])
            result.push_back(A[i]);
        i++;
    }
    
    while (j < B.size())
    {
        if (result.empty() || result.back() != B[j])
            result.push_back(B[j]);
        j++;
    }

    return result;
}
int main()
{
    vector<int> A = {1, 1, 1, 2, 3, 4, 5, 6};
    vector<int> B = {1, 2, 2, 3, 3, 4, 5, 7, 8, 9, 10};
    vector<int> result = unionSort(A, B);
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;
}