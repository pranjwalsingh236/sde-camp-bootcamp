class Solution
{
public:
    int dfs(vector<vector<int>> &temp, int i, int j, int m, int n, int sum)
    {
        if (i < 0 || i == m || j < 0 || j == n || temp[i][j] == 0 || temp[i][j] == -1)
        {
            // cout << "OK" << endl;
            return sum;
        }
        sum += temp[i][j];
        int var = temp[i][j];
        temp[i][j] = -1;
        int r = dfs(temp, i + 1, j, m, n, sum);
        int l = dfs(temp, i - 1, j, m, n, sum);
        int u = dfs(temp, i, j + 1, m, n, sum);
        int d = dfs(temp, i, j - 1, m, n, sum);
        temp[i][j] = var;
        int ans1 = max(l, r);
        int ans2 = max(u, d);
        return max(ans1, ans2);
    }
    int getMaximumGold(vector<vector<int>> &grid)
    {
        vector<vector<int>> temp = grid;
        int maxi = 0;
        int m = grid.size();
        int n = grid[0].size();
        for (int i = 0; i < grid.size(); i++)
        {
            for (int j = 0; j < grid[0].size(); j++)
            {
                if (temp[i][j] != 0)
                    maxi = max(maxi, dfs(temp, i, j, m, n, 0));
            }
        }
        return maxi;
    }
};