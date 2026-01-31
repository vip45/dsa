#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void twod()
    {
        cout << "Hello world!" << endl;
        int row = 5, col = 4;

        for (int i = 1; i <= row; i++)
        {
            for (int j = 1; j <= col; j++)
            {
                cout << i << j << " ";
            }
            cout << endl;
        }
    }
    void pascalsTri(int n)
    {
        vector<vector<int>>ans;
        
        for(int i=1;i<=n;i++){
            vector<int>row;
            int key=i;
            for(int j=1;j<=i;j++){
                int val=i*10*j;
                row.push_back(val);
            }
            ans.push_back(row);
            cout<<endl;
        }
        for(int i=0;i<ans.size();i++){
            for(int j=0;j<ans[i].size();j++){
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
    }
};

int main()
{
    Solution obj;
    // obj.twod();
    obj.pascalsTri(5);

    return 0;
}
