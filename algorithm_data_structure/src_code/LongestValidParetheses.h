#pragma once
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class LongestValidParetheses
{
public:
	LongestValidParetheses() {};
	int longestValidParentheses(string s) {
		if (s.size() == 0) return 0;
		int sz = s.size();
		int left_pare = s[0] == '(' ? 1:0;
		vector<int>local_dp(sz, 0), global_dp(sz, 0);
		for (int i = 1; i < sz; ++i)
		{
			if (s[i] == ')')
			{
				int pos = i - local_dp[i - 1] - 1;
				if (pos >= 0 && s[pos] == '(')
				{
					local_dp[i] = local_dp[i - 1] + 2;
					if (pos - 1 >= 0)
						local_dp[i] += local_dp[pos - 1];

				}
			 }
			global_dp[i] = max(global_dp[i - 1], local_dp[i]);
		}
		return global_dp[sz - 1];
	}
	~LongestValidParetheses() {};

};


