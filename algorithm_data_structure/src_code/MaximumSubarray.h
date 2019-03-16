#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class MaximumSubarray
{
public:
	int maxSubArray(vector<int>& nums) {
		if (nums.size() == 0) return 0;
		int sz = nums.size();
		vector<int> global_dp(sz,nums[0]), local_dp(sz, nums[0]);
		for (int i = 1; i < sz; ++i)
		{
			local_dp[i] = max(local_dp[i-1] + nums[i],nums[i]);
			global_dp[i] = max(global_dp[i - 1], local_dp[i]);
		}
		return global_dp[sz - 1];
	}
};
