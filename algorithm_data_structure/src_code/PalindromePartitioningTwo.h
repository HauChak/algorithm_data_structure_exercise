#pragma once
#include <string>
#include <vector>
#include <algorithm>
using namespace std;
class PalindromePartitioningTwo
{
public:
	PalindromePartitioningTwo() {};
	int minCut(string s) {
		if (s.empty())return 0;
		int sz = (int)s.size();
		vector<vector<bool>> p(sz, vector<bool>(sz));
		vector<int> dp(sz);
		for (int i = 0; i < sz; ++i)
		{
			dp[i] = i;
			for (int j = 0; j <= i; ++j)
			{
				if (s[i] == s[j] && (i - j < 2 || p[i - 1][j + 1]))
				{
					p[i][j] = true;
					dp[i] = j == 0 ? 0 : min(dp[i], dp[j-1] + 1);
				}
			}
		}
		return dp[sz - 1];
	}
	~PalindromePartitioningTwo() {};

private:

};
