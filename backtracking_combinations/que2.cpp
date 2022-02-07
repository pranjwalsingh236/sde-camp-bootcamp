#include <bits/stdc++.h>
using namespace std;

void util(vector<int> comb, vector<vector<int>> &ans, int i, int curr_sum, int target, vector<int> &candidates)
{
    if (curr_sum == target)
    {
        ans.push_back(comb);
        return;
    }
    // Numbers equal to or greater than the current index element are inserted to avoid same combination with different arrangement eg. {2, 2, 3} and {2, 3, 2}
    for (; i < candidates.size(); i++)
    {
        if (curr_sum + candidates[i] <= target)
        {
            comb.push_back(candidates[i]);
            util(comb, ans, i, curr_sum + candidates[i], target, candidates);
            comb.pop_back();
        }
        // Rejecting larger elements
        else
            return;
    }
}

void combinationSum(vector<int> &candidates, vector<vector<int>> &ans,int target)
{
    sort(candidates.begin(), candidates.end());
    util({},ans, 0, 0, target, candidates);
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> temp(n);
    for(int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }
    vector<vector<int>> ans;
    combinationSum(temp, ans, k);
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