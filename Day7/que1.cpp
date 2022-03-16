#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    void helper(vector<vector<int>> &ans, vector<int> temp, int n, int k, int i)
    {
        if (temp.size() == k)
        {
            ans.push_back(temp);
            return;
        }
        if (i > n)
        {
            return;
        }
        for (int j = i; j <= n; j++)
        {
            temp.push_back(j);
            helper(ans, temp, n, k, j + 1);
            temp.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(ans, temp, n, k, 1);
        return ans;
    }
};

