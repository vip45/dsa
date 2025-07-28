#include "bits/stdc++.h"
using namespace std;

int main()
{
    int a = 4;
    int b = 6;
    cout << "A & B : " << (a & b) << endl;
    cout << "A & B : " << (a | b) << endl;
    cout << "A & B : " << (a ^ b) << endl;
    cout << "A & B : " << (~a) << endl;

    cout<<(a<<2)<<endl;

    for(int i=0;i<10;++i){
        cout<<i<<" ";
    }
    cout<<endl;

    int j =0;
    cout<<j++<<endl;
    int k=0;
    cout<<++k<<endl;
}