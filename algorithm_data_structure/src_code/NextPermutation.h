#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class  NextPermutation
{
public:
	void nextPermutation(vector<int>& nums) {
		if (nums.empty())return;
		int sz = nums.size();
		bool flag = false;		
		for (int i = sz - 1; i >= 0; --i)
		{
			int j = i - 1;
			while (j>=0)

			{
				if (nums[j] < nums[i])
					continue;
				j--;
			}
			if (j >= 0)
			{
				int tmp = nums[i];
				nums[i] = nums[j];
				nums[j] = tmp;
				flag = true;
				return;
			}
		}
		if (!flag)
		{
			for (int i = sz - 1; i >= 0; --i)
			{
				int j = i - 1;
				while (j >= 0)
				{
					if (nums[j] < nums[i])
						continue;
					j--;
				}
				if (j >= 0)
				{
					int tmp = nums[i];
					nums[i] = nums[j];
					nums[j] = tmp;
					return;
				}
			}
		}
	}
protected:
private:
};
