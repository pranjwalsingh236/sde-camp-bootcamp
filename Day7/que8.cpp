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
        while (idx + 1 < nums.size())
        {
            if (nums[idx] != nums[idx + 1])
                break;
            idx++;
        }
        helper(nums, ans, subset, idx + 1);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> subset;
        vector<vector<int>> ans;
        helper(nums, ans, subset, 0);

        return ans;
    }
};
