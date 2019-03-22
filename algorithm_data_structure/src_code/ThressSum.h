#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class ThreeSum
{
public:
	
	vector<vector<int>> threeSum(vector<int>& nums) {
		sort(nums.begin(), nums.end());
		vector<vector<int>> res;
		if (nums.size() < 3) return res;
		int sz = nums.size();
		for (int k = 0; k < sz; ++k)
		{
			int ele = nums[k];
			if (ele > 0)return res;
			if (k > 0 && nums[k] == nums[k - 1]) continue;
			int i = k + 1, j = sz - 1,target = -nums[k];
			while (i < j)
			{
				if (nums[i] + nums[j] == target)
				{
					vector<int>tmp_out = { k,i,j };
					res.push_back(tmp_out);
					while (i < j&&nums[j] == nums[j - 1])j--;
					while (i < j&&nums[i + 1] == nums[i])i++;
					i++;
					j--;
				}
				else if (nums[i] + nums[j] > target)++i;
				else
				{
					--j;
				}
			}
		}
		return res;
	}
};
