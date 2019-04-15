#include"algothrim_data_structure/src_code/pch.h"
#include <vector>
#define Max(a,b) a*b
using namespace std;

int main()
{
	vector<int> nums = {5,1,not_T,not_T,4,3,not_T,not_T,6};
	TreeNode*root = nullptr;
	initialize_tree(root, nums);
	ValidBinaryTree demo;
	bool res = demo.isValidBST(root);
	bool a = false && true && true;
	system("pause");
	return 0;
}