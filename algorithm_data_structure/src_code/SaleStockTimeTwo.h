#pragma once
#include <vector>
#include<climits>
#include <algorithm>
using namespace std;
class SaleStockTimeTwo
{
public:
	SaleStockTimeTwo();
	int maxProfit(vector<int>& prices) {
		if (prices.size() == 0) return 0;
		int buy_in = prices[0];
		int sell_out = INT_MAX;
		int profit = 0;
		for (int i = 0; i < prices.size(); ++i)
		{
			if (prices[i] > buy_in)
			{
				profit += prices[i] - buy_in;
				sell_out = prices[i];
				continue;
			}
			buy_in = min(sell_out, prices[i]);
		}
		return profit;
	}
	~SaleStockTimeTwo();
};

