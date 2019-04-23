#include "algorithm_data_structure/src_code/pch.h"
#include <vector>
#define Max(a,b) a*b
using namespace std;

int main()
{
	vector<int> nums = {5,-3,not_T,not_T,2}; TreeNode* root = nullptr;
	initialize_tree(root, nums);
	MostFrequentSubtreeSum demo;
	vector<int>res = demo.findFrequentTreeSum(root);
	system("pause");
	return 0;
}