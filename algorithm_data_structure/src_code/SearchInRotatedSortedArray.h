#pragma once
#include <vector>

using namespace std;

class SearchInRotatedSortedArray
{
public:
	bool search(vector<int>&nums, int target)
	{
		int sz = nums.size(), left = 0, right = sz - 1,mid=0;
		while (left <= right)
		{
			mid = (left + right) / 2;
			if (nums[mid] == target)return  mid;
			else if (nums[mid] > nums[left])
			{
				if (nums[left]<=target&&nums[mid]>target)right = mid - 1;
				else
				{
					left = mid + 1;
				}
			}
			else
			{
				if (nums[mid]<target&&nums[right]>=target)left = mid + 1;
				else right = mid - 1;
			}
		}
		return -1;
	}
};