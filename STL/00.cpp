#include "bits/stdc++.h"
using namespace std;

void print() { cout << "Hello Vipin" << endl; }
int main()
{
    pair<int, int> p = {1, 2};
    cout << p.first << endl
         << p.second << endl;

    pair<int, pair<int, int>> pp = {10, {20, 30}};
    cout << pp.first << endl;
    cout << pp.second.first << endl;
    cout << pp.second.second << endl;

    pair<int, int> arr[] = {{1, 2}, {2, 3}};
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << size << endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i].first << " " << arr[i].second << endl;
    }
}