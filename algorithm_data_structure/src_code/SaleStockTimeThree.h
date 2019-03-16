#pragma once
#include <vector>
#include <algorithm>

using namespace std;
class SaleStockTimeThree
{
public:
	SaleStockTimeThree();
	int maxProfit(vector<int>& prices) {
		if (prices.size() == 0) return 0;
		int sz = prices.size();
		vector<vector<int>>local_dp(sz+1, vector<int>(3, 0)), global_dp(sz+1, vector<int>(3, 0));
		for (int i = 1; i < sz; ++i)
		{
			for (int j = 1; j <= 2; ++j)
			{
				int diff = prices[i] - prices[i - 1];
				local_dp[i][j] = max(local_dp[i - 1][j], global_dp[i - 1][j - 1]) + diff;;
				global_dp[i][j] = max(global_dp[i - 1][j], local_dp[i][j]);
			}
		}
		return global_dp[sz-1][2];
	}
	~SaleStockTimeThree();
};

