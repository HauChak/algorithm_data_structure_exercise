#include "algorithm_data_structure/src_code/pch.h"
#include <vector>
#define Max(a,b) a*b
using namespace std;

int main()
{
	vector<int> nums = {4,9,5,not_T,not_T,1,not_T,not_T,0};
	TreeNode*root = nullptr;
	initialize_tree(root, nums);
	SumRootToLeaf demo;
	int res = demo.sumNumbers(root);
	system("pause");
	return 0;
}