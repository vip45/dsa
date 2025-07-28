#include "bits/stdc++.h"
using namespace std;

int main(){
    int arr[] = {1,2,3};
    int k = 3;
    int count=0;
    for(int i=0;i<3;i++){
        for(int j=i;j<3;j++){
            int sum = 0;
            for(int k=i;k<=j;k++){
                cout<<arr[k]<<" ";
                sum+=arr[k];
            }cout<<endl;
            if(sum==k)count++;
        }
    }

    cout<<count;
}