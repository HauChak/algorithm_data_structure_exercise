#pragma once
#include <vector>
#include <algorithm>
using namespace std;


class NextPermutation
{
public:
	void nextPermutation(vector<int>&nums)
	{
		if (nums.empty())return;
		for (int i = nums.size() - 2; i >= 0; --i)
		{
			if (nums[i + 1] > nums[i])
			{
				int j = 0;
				for (j = nums.size() - 1; j > i; --j)
				{
					if (nums[j] > nums[i])break;
				}
				swap(nums[i], nums[j]);
				reverse(nums.begin() + i + 1, nums.end());
				return;
			}
				
		}
		reverse(nums.begin(), nums.end());
	}
};