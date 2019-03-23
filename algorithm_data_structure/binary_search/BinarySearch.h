#pragma once
#include <vector>
#include <algorithm>

using namespace std;

template<typename T>
int search_num(vector<T>&nums,int target)
{
	sort(nums.begin(), nums.end());
	int sz = (int)nums.size(),left = 0,right = sz-1,mid = (left+right)/2;
	while (left <= right&&nums[mid] != target)
	{
		if (nums[mid] > target)right = mid - 1;
		else
			left = mid+1;
		mid = (left + right) / 2;
	}
	return mid;
}
