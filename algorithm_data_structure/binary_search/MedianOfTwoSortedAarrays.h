#pragma once
#include <vector>
#include <algorithm>

using namespace std;

class MedianOfTwoSortedArrays
{
public:
	double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
		int sz1 = nums1.size(), sz2 = nums2.size();
		int left = (sz1 + sz2 + 1) / 2; int right = (sz1 + sz2 + 2) / 2;
		return (help_find(nums1, 0, nums2, 0, left) + help_find(nums1, 0, nums2, 0, right)) / 2;
	}
	double help_find(vector<int>& num1, int i, vector<int>& num2, int j, int k)
	{
		if (i >= num1.size())return num2[j + k - 1];
		if (j >= num2.size())return num1[i + k - 1];
		if (k == 1)return min(num1[i], num2[j]);
		int midval1 = (i + k / 2 - 1 < num1.size()) ? num1[i + k / 2 - 1] : INT_MAX;
		int midval2 = (j + k / 2 - 1 < num2.size()) ? num2[j + k / 2 - 1] : INT_MAX;
		if (midval1 < midval2)
		{
			return help_find(num1, i + k / 2, num2, j, k - k / 2);
		}
		else return help_find(num1, i, num2, j + k / 2, k - k / 2);
	}
protected:
private:
};
