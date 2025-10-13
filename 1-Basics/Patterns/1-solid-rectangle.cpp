#include "iostream"
using namespace std;

int main()
{
    cout << "Hello Vipin Welcome Back" << endl;

    int n;

    cout << "Enter the number : ";
    cin >> n;
    cout << endl;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }

    return 0;
}