class Solution
{
public:
    void helper(vector<int> &nums, vector<vector<int>> &ans, vector<int> subset, int idx)
    {

        if (idx == nums.size())
        {
            ans.push_back(subset);
            return;
        }
        subset.push_back(nums[idx]);
        helper(nums, ans, subset, idx + 1);
        subset.pop_back();
        helper(nums, ans, subset, idx + 1);
    }
    vector<vector<int>> subsets(vector<int> &nums)
    {
        vector<int> subset;
        vector<vector<int>> ans;
        helper(nums, ans, subset, 0);
        return ans;
    }
};
