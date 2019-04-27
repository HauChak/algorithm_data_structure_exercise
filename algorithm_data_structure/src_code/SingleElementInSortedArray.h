#pragma once
#include <vector>

using namespace std;

class SingleElementInSortedArray
{
public:
	int singleNonDuplicate(vector<int>& nums) {
		int fast = 1, slow = 0;
		for (; fast < nums.size(); fast+=2,slow+=2)
		{
			if (fast + 2 > nums.size() - 1)
			{
				if (nums[fast + 1] == nums[fast])
					return nums[slow];
				else return nums[fast + 1];
			}
			if (nums[fast] != nums[slow])
			{
				return nums[slow];
			}
		}
		return 0;
	}
protected:
private:
};
