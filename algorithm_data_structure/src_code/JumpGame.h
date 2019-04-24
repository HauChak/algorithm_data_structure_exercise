#pragma once
#include <vector>

using namespace std;

class JumpGame
{
public:
	bool canJump(vector<int>& nums) {
		vector<bool>res(nums.size(), false);
		if (nums.empty())return true;
		res[0] = true;
		for (int i = 0; i < nums.size(); ++i)
		{
			for (int j = 0; j <= nums[i]&&i+j<nums.size(); ++j)
			{
				res[i + j] = res[i]||res[i+j];
			}
		}
		return res.back();
	}
};
