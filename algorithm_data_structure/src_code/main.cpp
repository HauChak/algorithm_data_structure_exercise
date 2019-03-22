#include"pch.h"

using namespace std;

int main()
{
	ThreeSum demo;
	vector<int> nums = { -1, 0, 1, 2, -1, -4 };
	vector<vector<int>> res = demo.threeSum(nums);
	system("pause");
	return 0;
}