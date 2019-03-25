#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class TrappingRainWater
{
public:
	int trap(vector<int>& height)
	{
		int left = 0, right = height.size() - 1,res=0;
		
		while (left < right)
		{
			int mn = min(height[left], height[right]);
			if (mn == height[left])
			{
				left++;
				while (left < right&&height[left] < mn)
				{
					res += mn - height[left++];
				}
			}
			if (mn == height[right])
			{
				right--;
				while (left < right&&height[right] < mn)
				{
					res += mn - height[right--];
				}
			}
		}
		return res;
	}
protected:
private:
};

