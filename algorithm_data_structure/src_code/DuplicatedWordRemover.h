#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class DuplicatedEleRemover
{
public:
	int removeDuplicates(vector<int>& nums) {
		if (nums.size() == 0)return 0;
		int res = 1, count = 0, sz = nums.size();
		for (int i = 1; i < sz; ++i)
		{
			if (nums[i - count] == nums[i - 1 - count])
			{
				nums.erase(nums.begin() + (i - count));
				count += 1;
			}
		}
		return nums.size();
	}
};