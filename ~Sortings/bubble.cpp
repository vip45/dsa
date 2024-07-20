#include "bits/stdc++.h"
using namespace std;

void bubbleSort(vector<int>&arr){
        int n = arr.size();

        for(int i=0;i<n-1;i++){
            for(int j=0;j<n-i;j++){
                if(arr[j] > arr[j+1]){
                    swap(arr[j],arr[j+1]);
                }
            }
        }
}

int main(){
    vector<int> arr = {64, 34, 25, 12, 22, 11, 90};
    bubbleSort(arr);
    for (int num : arr)
    {
        std::cout << num << " ";
    }
    return 0;
}