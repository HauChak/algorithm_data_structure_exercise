#pragma once
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

class LongestPalindromicSubsequence
{
public:
	LongestPalindromicSubsequence() {};
	int longestPalindromeSubseq(string s) {
		vector<int> dp(s.size(), 1);
		int res = 0;
		for (int i = 1; i < s.size(); ++i)
		{
			int pos = i - dp[i - 1] - 1;
			if(pos<0&&s[i])
			if (pos > 0 && s[pos] == s[i])
			{
				dp[i] = dp[i - 1] + 1;
			}
			res = max(res, dp[i]);
		}
		return res;
	}
	~LongestPalindromicSubsequence() {};

private:

};


