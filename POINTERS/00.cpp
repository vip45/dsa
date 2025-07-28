#include "bits/stdc++.h"
using namespace std;

int main()
{
    // int num{10};
    // cout << num << endl;
    // cout << sizeof num << endl;
    // cout << &num << endl;

    int *p;
    cout << "Value of p " << p << endl;
    cout << "Address of p " << &p << endl;
    cout << "Size of  p " << sizeof p << endl;
    p = nullptr;
    cout << "Value of p " << p << endl;

    int *p1{nullptr};
    double *p2{nullptr};
    unsigned long long *p3{nullptr};
    vector<string> *p4{nullptr};
    string *p5{nullptr};
    cout << sizeof p1 << endl;
    cout << sizeof p2 << endl;
    cout << sizeof p3 << endl;
    cout << sizeof p4 << endl;
    cout << sizeof p5 << endl;
}