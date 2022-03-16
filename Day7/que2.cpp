class Solution
{
public:
    void helper(vector<vector<int>> &ans, vector<int> temp, vector<int> &candidates, int sum, int target, int idx)
    {
        if (idx >= candidates.size())
        {
            return;
        }
        if (sum > target)
        {
            return;
        }
        if (sum == target)
        {
            ans.push_back(temp);
            return;
        }
        for (int j = idx; j < candidates.size(); j++)
        {
            temp.push_back(candidates[j]);
            helper(ans, temp, candidates, sum + candidates[j], target, j);
            temp.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int> &candidates, int target)
    {
        vector<vector<int>> ans;
        vector<int> temp;
        helper(ans, temp, candidates, 0, target, 0);
        return ans;
    }
};