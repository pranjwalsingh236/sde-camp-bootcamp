class Solution
{
public:
    void helper(vector<int> &nums, vector<vector<int>> &ans, vector<int> subset, int idx)
    {
        ans.push_back(subset);
        if (idx == nums.size())
        {
            return;
        }
        subset.push_back(nums[idx]);
        helper(nums, ans, subset, idx + 1);
        subset.pop_back();
        helper(nums, ans, subset, idx + 1);
    }
    vector<vector<int>> subsetsWithDup(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<int> subset;
        vector<vector<int>> ans;
        helper(nums, ans, subset, 0);
        set<vector<int>> st;
        for (auto i : ans)
        {
            st.insert(i);
        }
        ans.clear();
        for (auto i : st)
        {
            ans.push_back(i);
        }
        return ans;
    }
};