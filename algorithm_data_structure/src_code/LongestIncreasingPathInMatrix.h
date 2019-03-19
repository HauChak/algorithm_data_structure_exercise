#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class LongestIncreasingPathInMatrix
{
public:
	vector<vector<int>> dirs = { {-1,0},{1,0},{0,-1},{0,1} };
	int longestIncreasingPath(vector<vector<int>>& matrix) {
		if (matrix.empty() || matrix[0].empty())return 0;
		int row = matrix.size(), col = matrix[0].size(),res=0;
		vector<vector<int>>dp(row, vector<int>(col, 0));
		for(int i=0;i<row;++i)
			for (int j = 0; j < col; ++j)
			{
				res = max(res,dfs(matrix, i, j, dp));
			}
		return res;
	}
	int dfs(const vector<vector<int>>& matrix, int i, int j, vector<vector<int>>&dp)
	{
		if (dp[i][j])return dp[i][j];
		int row = matrix.size(), col = matrix[0].size(),mx=1;
		for (auto direction : dirs)
		{
			int x = i + direction[0], y = j + direction[1];
			if(x>=row||x<0||y>=col||y<0||matrix[i][j]>=matrix[x][y])continue;
			int len = 1 + dfs(matrix, x, y, dp);
			mx = max(mx, len);
		}
		dp[i][j] = mx;
		return mx;
	}
protected:
private:
};