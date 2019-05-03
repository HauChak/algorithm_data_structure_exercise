#pragma once
#include<vector>
#include <algorithm>
using namespace std;

class SortColor
{
public:
	void sortColors(vector<int>& nums) {
		int red = 0, blue = nums.size() - 1;
		for (int i = 0; i < blue; ++i)
		{
			if (nums[i] == 0)
				swap(nums[red++], nums[i]);
			else if (nums[i] == 2)
				swap(nums[blue--], nums[i]);
		}
	}
protected:
private:
};
