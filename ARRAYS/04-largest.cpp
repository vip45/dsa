#include "bits/stdc++.h"
using namespace std;

int main(){
    int arr[]={43,76,34,9,7,24,564,3,853,35,32};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maxi=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    cout<<maxi<<endl;
}