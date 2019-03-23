#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class MostWaterContainer
{
public:
	int maxArea(vector<int>& height)
	{
		int left = 0,res=0;
		int right = height.size() - 1;
		while (left < right)
		{
			res = min(height[left], height[right])*(right - left);
			height[left] < height[right] ? left++ : right--;
		}
		return res;
	}
protected:
private:
};
