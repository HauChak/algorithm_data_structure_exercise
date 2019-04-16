#pragma once
#include "InitializeTree.h"
#include <vector>
#include <algorithm>
using namespace std;

class BinaryTreeMaxSumPath
{
public:
	int global_best;
	int help_max_sum(TreeNode* root)
	{
		if (!root)return 0;
		int tmp_best= root->val + help_max_sum(root->left)+help_max_sum(root->right);
		global_best = max(tmp_best, global_best + tmp_best);		
	}
	int maxPathSum(TreeNode* root) {
		global_best = INT_MIN;
		help_max_sum(root);
		return global_best;
	}
};
