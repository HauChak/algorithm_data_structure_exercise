#pragma once
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class LongestPalindromicSubsequence
{
public:
	int longestPalindromeSubseq(string s) {
		if (s.size() == 0)return 0;
		int sz = s.size();
		vector<vector<int>>dp = vector<vector<int>>(sz, vector<int>(sz, 0));
		dp[0][0] = 1;
		for (int i = 1; i < sz; ++i)
		{
			dp[i][i] = 1;
			for (int j = i-1; j>=0; --j)
			{
				if (s[i] == s[j])
					dp[i][j] = dp[i - 1][j+1] + 2;
				else
				{
					dp[i][j] = max(dp[i - 1][j], dp[i][j + 1]);
				}
			}
		}
		return dp[sz - 1][0];
	}
protected:
private:
};