#pragma once
#include "InitializeTree.h"
#include <algorithm>

class BinaryTreeMaxPathSum
{
public:
	int maxval;
	int helper(TreeNode*root)
	{
		if (!root)return 0;
		int left = max(helper(root->left), 0);
		int right=max(helper(root->right), 0);
		maxval = max(maxval, left + right + root->val);
		return max(left, right) + root->val;
	}
	int maxPathSum(TreeNode* root) {
		maxval = 0;

	}
};
