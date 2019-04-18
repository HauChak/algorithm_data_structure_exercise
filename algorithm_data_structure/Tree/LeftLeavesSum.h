#pragma once
#include "InitializeTree.h"

class LeftLeavesSum
{
public:
	int help_sum(TreeNode* root,int& sum)
	{
		if (!root)
			return 0;
		if (!root->left && !root->right)
			return root->val;
		int left_val = help_sum(root->left,sum);
		sum += left_val;
		help_sum(root->right, sum);
		return 0;
	}
	int sumOfLeftLeaves(TreeNode* root) {
		int res = 0;
		help_sum(root, res);
		return res;
	}
protected:
private:
};
