#include "bits/stdc++.h"
using namespace std;

void markRow(vector<vector<int>> &arr, int val, int col)
{
    for (int j = 0; j < col; j++)
        arr[val][j] = 0;
}

void markCol(vector<vector<int>> &arr, int val, int row)
{
    for (int i = 0; i < row; i++)
        arr[i][val] = 0;
}

int main()
{
    int row, col;
    cout << "Enter number of rows and cols: ";
    cin >> row >> col;

    vector<vector<int>> arr(row, vector<int>(col));
    unordered_set<int> rowvector;
    unordered_set<int> colvector;
    cout << "Enter the elements of the matrix : ";
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cin >> arr[i][j];
            if (arr[i][j] == 0)
            {
                rowvector.insert(i);
                colvector.insert(j);
            }
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

    cout << endl;
    for (auto i : rowvector)
    {
        cout << i << " ";
        markRow(arr, i, col);
    }
    cout << endl;
    for (auto i : colvector)
    {
        cout << i << " ";
        markCol(arr, i, row);
    }

    cout << endl
         << "Printing matrix : " << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}