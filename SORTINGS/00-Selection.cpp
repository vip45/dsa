#include "bits/stdc++.h"
using namespace std;
void selsort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                minIndex=j;
            }
        }
        swap(arr[i],arr[minIndex]);
    }
}
void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}
int main()
{
    int arr[] = {65, 2, 7, 3, 8732, 332};
    int n = sizeof(arr) / sizeof(arr[0]);
    print(arr,n);
    selsort(arr,n);
    print(arr,n);    
}