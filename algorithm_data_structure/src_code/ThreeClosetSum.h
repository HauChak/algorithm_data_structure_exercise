#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class ThreeClosetSum
{
public:
	int threeSumClosest(vector<int>& nums, int target)
	{
		if (nums.size() == 0)return 0;
		sort(nums.begin(), nums.end());
		int res = INT_MIN+target, i = 0, j = nums.size() - 1;
		for (int k = 0; k < nums.size()-2; ++k)
		{
			int i = k + 1,j=nums.size()-1;
			while (i < j)
			{
				int tripe_sum = nums[k] + nums[i] + nums[j];
				if (tripe_sum == target)return target;
				else if (tripe_sum -target> 0)
				{
					res = abs(tripe_sum - target) < abs(res - target) ? tripe_sum : res;
					j--;
					
				}
				else
				{
					res = abs(tripe_sum - target) < abs(res - target) ? tripe_sum : res;
					i++;
				}
			}
		}
		return res;
	}
protected:
private:
};