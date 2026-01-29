#include "bits/stdc++.h"
using namespace std;

int main()
{
    vector<int> arr = {1, 2, 3, 4, 5};
    vector<int>prefix(arr.size());
    vector<int>suffix(arr.size());
    prefix[0]=arr[0];
    suffix[arr.size()-1]=arr[arr.size()-1];

    for(int i=1;i<arr.size();i++){
        prefix[i]=arr[i]+prefix[i-1];
    }
    for(int i=0;i<prefix.size();i++){
        cout<<prefix[i]<<" ";
    }
    for(int i=arr.size()-2;i>=0;i--){
        suffix[i]=arr[i]+suffix[i+1];
    }
    cout<<endl;
    for (int i = 0; i < prefix.size(); i++)
    {
        cout << suffix[i] << " ";
    }
    cout<<endl;
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}