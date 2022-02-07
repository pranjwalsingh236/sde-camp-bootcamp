#include <bits/stdc++.h>
using namespace std;

void util(vector<int> comb, vector<vector<int>> &ans, int i, int curr_sum, int target, vector<int> &candidates)
{
    // cout << "i: " << i << ", " << comb.size() << endl;
    if (curr_sum == 0)
    {
        ans.push_back(comb);
        return;
    }
    // Numbers equal to or greater than the current index element are inserted to avoid same combination with different arrangement eg. {2, 2, 3} and {2, 3, 2}
    for (int j = i; j < candidates.size(); j++)
    {
        if (j > i && candidates[j - 1] == candidates[j])
            continue;
        int t = candidates[j];
        if (curr_sum - t < 0)
            break;
        comb.push_back(t);
        util(comb, ans, j + 1, curr_sum - t, target, candidates);
        comb.pop_back();
    }
}
void combinationSum2(vector<int> &arr, vector<vector<int>> &ans, int k)
{
    sort(arr.begin(), arr.end());
    int sum = 0;
    vector<int> temp;
    util(temp, ans, 0, k, k, arr);
    set<vector<int>> st(ans.begin(), ans.end());
    ans.clear();
    for(auto i: st)
    {
        ans.push_back(i);
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k;
    cin >> n >> k;
    vector<int> temp(n);
    for (int i = 0; i < n; i++)
    {
        cin >> temp[i];
    }
    vector<vector<int>> ans;
    combinationSum2(temp, ans, k);
    int t = ans.size();
    for (int i = 0; i < t; i++)
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