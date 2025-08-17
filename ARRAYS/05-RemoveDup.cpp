#include "bits/stdc++.h"
using namespace std;

int main(){
    int arr[] = {1,1,1,1,1,2,3,3,3,4,5,5,6,6,7,7,7,8,8,8,8,9,10,10,10};
    int size = sizeof(arr)/sizeof(arr[0]);

    int pointer1 = 0;
    for (int pointer2 = 0; pointer2 < size; pointer2++)
    {
        if (arr[pointer1] != arr[pointer2] && pointer1 != pointer2)
        {
            pointer1++;
            arr[pointer1] = arr[pointer2];
        }
    }

    pointer1++;
    cout<<pointer1<<endl;

    vector<int>ans;

    for(int i=0;i<pointer1;i++){
        ans.push_back(arr[i]);
    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }

}