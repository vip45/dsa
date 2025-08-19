#include "bits/stdc++.h"
using namespace std;

void arrZero(vector<vector<int>> &arr, int start, int end, int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if ((i == start || j == end) && arr[i][j] != 0)
            {
                arr[i][j] = -1;
            }
        }
    }
}

int main()
{
    int row, col;
    cout << "Enter number of rows and cols: ";
    cin >> row >> col;

    vector<vector<int>> arr(row, vector<int>(col));

    cout << "Enter the elements of the matrix : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
        }
    }

    cout << "Printing matrix : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == 0)
            {
                arrZero(arr, i, j, row, col);
            }
        }
    }

    cout << "Printing matrix after update : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<"Printing final ans " <<endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (arr[i][j] == -1)
            {
                arr[i][j]=0;
            }
        }
    }
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
