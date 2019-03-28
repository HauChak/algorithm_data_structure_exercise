#pragma once
#include <vector>
#include <algorithm>
using namespace std;

class FirstMissingPositive
{
public:
	FirstMissingPositive() {};
	int firstMissingPositive(vector<int>& nums) {
		int res = 1;
		for (int i = 0; i < nums.size(); ++i)
		{
			if (nums[i] <= 0)continue;
			else if (nums[i] < res)
				res = res+1;
			else
				res = res;
		}
	}
	~FirstMissingPositive() {};

private:

};

