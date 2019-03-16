#pragma once
#include<vector>
#include <algorithm>
using namespace std;
class SaleStockTime
{
public:
	SaleStockTime();
	int maxProfit(vector<int>& prices)
	{
		if (prices.size() == 0) return 0;
		vector<int> nums = prices;
		int buy_in = nums[0];
		int profit = 0;
		for (int i=0;i<nums.size();++i)
		{
			if (nums[i] > buy_in)
			{
				profit = max(profit, nums[i] - buy_in);
			}
			buy_in = min(buy_in, nums[i]);
		}
		return profit;
	}
	~SaleStockTime();
};

