class Solution
{
public:
    void helper(vector<vector<int>> &arr, vector<string> &ans, string temp, int i, int j)
    {
        if (i < 0 || i >= arr.size() || j < 0 || j >= arr.size() || arr[i][j] != 1)
        {
            return;
        }
        if (i == arr.size() - 1 && j == arr.size() - 1)
        {
            ans.push_back(temp);
            return;
        }
        // cout << temp << endl;
        arr[i][j] = -1;
        helper(arr, ans, temp + 'U', i - 1, j);
        helper(arr, ans, temp + 'D', i + 1, j);
        helper(arr, ans, temp + 'R', i, j + 1);
        helper(arr, ans, temp + 'L', i, j - 1);
        arr[i][j] = 1;
    }
    vector<string> findPath(vector<vector<int>> &m, int n)
    {
        // Your code goes here
        vector<string> ans;
        string temp = "";
        helper(m, ans, temp, 0, 0);
        return ans;
    }
};