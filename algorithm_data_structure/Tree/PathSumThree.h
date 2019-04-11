#pragma once
#include "InitializeTree.h"


class PathSumThree
{
public:
	PathSumThree() {};
	int res;
	void previsited(TreeNode*root,int sum)
	{
		if (!root)return;
		helper(root, sum);
		previsited(root->left, sum);
		previsited(root->right, sum);		
	}
	void helper(TreeNode*root, int sum)
	{
		if (sum == 0)
		{
			res += 1;
		}
		if (!root)return;
		helper(root->left, sum - root->val);
		helper(root->right, sum - root->val);
	}
	int pathSum(TreeNode* root, int sum) {
		res = 0;
		previsited(root, sum);
		return res;
	}
	~PathSumThree() {};

private:

};

