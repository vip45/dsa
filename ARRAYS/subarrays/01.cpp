#include "bits/stdc++.h"
using namespace std;

int main() {
    vector<int> arr = {1, 2, 3, 4};
    int n = arr.size();

    for(int i = 0; i < n; i++){
        int sum = 0;
        unordered_set<int> st;

        for(int j = i; j < n; j++){
            sum += arr[j];
            cout << sum << "\n";

            if(st.find(sum) != st.end()){
                cout << "There is possibility.\n";
            }

            st.insert(sum);
        }
    }
}
