#include "bits/stdc++.h"
using namespace std;

void bubbleSort(int arr[],int n){
    for(int i=0;i<n;i++){
        bool swapped = false;
        for(int j=0;j<n-1-i;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j],arr[j+1]);
                swapped=true;
            }
        }
        if(!swapped) break;
    }
}

void print(int a[],int n){
    for(int i=0;i<n;i++){cout<<a[i]<<" ";}
}

int main(){
    int arr[] = {53,87,2,9,3,9,8,36,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    cout<<n<<endl;
    print(arr,n);
    bubbleSort(arr,n);
    cout<<endl;
    print(arr,n);

}