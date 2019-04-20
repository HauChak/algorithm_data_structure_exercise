#include "algorithm_data_structure/src_code/pch.h"
#include <vector>
#define Max(a,b) a*b
using namespace std;

int main()
{
	vector<int> nums = {-10,-3,0,5,9};
	ConvertSortArrayToBST demo;
	TreeNode* root = demo.sortedArrayToBST(nums);
	system("pause");
	return 0;
}