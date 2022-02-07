#include<bits/stdc++.h>
using namespace std;

void helper(int n, int k, int num, vector<int> &temp, vector<vector<int>> &res, int idx = 0, int itr = 0)
{
    if(idx == k)
    {
        res.push_back(temp);
        return;
    }
    if(num > n)
    {
        return;
    }

    temp[itr] = num;
    helper(n, k, num + 1, temp, res, idx + 1, itr + 1);
    helper(n, k, num + 1, temp, res, idx, itr);
}

vector<vector<int>> combine(int n, int k)
{
    vector<vector<int>> res;

    vector<int> temp(k, 0);
    helper(n, k, 1, temp, res);
    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;
    vector<vector<int>> ans = combine(n, k);
    int t = ans.size();
    for(int i = 0; i < t; i++)
    {
        cout << "[";
        int j = 0;
        for (; j < ans[i].size() - 1; j++)
        {
            cout << ans[i][j] << ", ";
        }
        cout << ans[i][j];
        cout << "]" << endl;
    }
}