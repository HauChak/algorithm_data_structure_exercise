#pragma once
#include <vector>
#include <algorithm>
using namespace std;
class SaleStockTimeVFour
{
public:
	SaleStockTimeVFour();
	int maxProfit(int k, vector<int>& prices) {
		if (prices.size() == 0||k==0) return 0;
		if (k >= prices.size() - 1)return solve_max_profit(prices);
		int sz = prices.size();
		vector<vector<int>>local_dp(sz + 1, vector<int>(k+1, 0)), global_dp(sz + 1, vector<int>(k+1, 0));
		for (int i = 1; i < sz; ++i)
		{
			for (int j = 1; j <= k; ++j)
			{
				int diff = prices[i] - prices[i - 1];
				local_dp[i][j] = max(local_dp[i - 1][j], global_dp[i - 1][j - 1]) + diff;;
				global_dp[i][j] = max(global_dp[i - 1][j], local_dp[i][j]);
			}
		}
		return global_dp[sz - 1][k];
	}
	int solve_max_profit(vector<int>& prices)
	{
		int res = 0;
		for (int i = 1; i < prices.size(); ++i)
		{
			if (prices[i] - prices[i - 1])
			{
				res += prices[i] - prices[i - 1];
			}
		}
		return res;
	}
	~SaleStockTimeVFour();
};

