class Solution {
public:
    void helper(vector<vector<int>> &ans, vector<int> temp, int i, int n)
    {
        if(i >= n)
        {
            //cout << "OK" << endl;
            ans.push_back(temp);
            return;
        }
        for(int j = i; j <= n; j++)
        {
            swap(temp[j], temp[i]);
            //cout << "i: " << i << " j: " << j << endl;
            helper(ans, temp, i + 1, n);
            swap(temp[j], temp[i]);
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        int n = nums.size();
        vector<int> temp = nums;
        helper(ans, temp, 0, n - 1);
        return ans;
    }
};