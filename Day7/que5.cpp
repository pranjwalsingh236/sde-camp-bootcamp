class Solution
{
public:
    void helper(vector<vector<int>> &ans, vector<int> temp, int N, map<int, int> mp)
    {
        if (temp.size() == N)
        {
            ans.push_back(temp);
            return;
        }

        for (auto i : mp)
        {
            int num = i.first;
            int count = i.second;

            if (count == 0)
            {
                continue;
            }

            temp.push_back(num);
            mp[num]--;
            helper(ans, temp, N, mp);
            temp.pop_back();
            mp[num]++;
        }
    }

    vector<vector<int>> permuteUnique(vector<int> &nums)
    {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        map<int, int> mp;
        for (int i : nums)
        {
            mp[i]++;
        }
        vector<int> temp;
        helper(ans, temp, nums.size(), mp);
        return ans;
    }
};