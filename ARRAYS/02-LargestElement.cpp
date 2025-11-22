#include "bits/stdc++.h"
using namespace std;

int main(){
    int arr[] = {4,3,36,3,27,6,23,432,2,23,765,0};
    int n = sizeof(arr)/sizeof(arr[0]);

    int maxi = INT_MIN;
    for(int i=0;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<maxi<<endl;
}