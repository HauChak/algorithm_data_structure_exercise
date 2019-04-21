#include "algorithm_data_structure/src_code/pch.h"
#include <vector>
#define Max(a,b) a*b
using namespace std;

int main()
{
	vector<int> nums = {1,not_T,2};
	TreeNode* root = nullptr;
	initialize_tree(root, nums);
	DeleteTreeNodeOfBST demo;
	TreeNode* new_root = demo.deleteNode(root,2);
	system("pause");
	return 0;
}