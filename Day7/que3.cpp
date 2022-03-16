class Solution
{
public:
    void util(vector<int> comb, vector<vector<int>> &ans, int i, int curr_sum, int target, vector<int> &candidates)
    {
        if (curr_sum == 0)
        {
            ans.push_back(comb);
            return;
        }
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
    vector<vector<int>> combinationSum2(vector<int> &arr, int k)
    {
        sort(arr.begin(), arr.end());
        int sum = 0;
        vector<vector<int>> ans;
        vector<int> temp;
        util(temp, ans, 0, k, k, arr);

        set<vector<int>> st(ans.begin(), ans.end());
        vector<vector<int>> res;
        for (auto i : st)
        {
            res.push_back(i);
        }
        return res;
    }
};