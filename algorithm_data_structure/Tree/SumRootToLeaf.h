#pragma once
#include "InitializeTree.h"
#include <vector>
#include <numeric>
using namespace std;


class SumRootToLeaf
{
public:
	void help(TreeNode* root, int root_leaf_value, vector<int>&res)
	{
		if (!root)
		{
			return;
		}
		root_leaf_value = root_leaf_value * 10 + root->val;
		if (!root->left && !root->right)
			res.push_back(root_leaf_value);
		help(root->left, root_leaf_value, res);
		help(root->right, root_leaf_value, res);
	}
	int sumNumbers(TreeNode* root) {
		vector<int>res;
		help(root, 0, res);
		int res_value = accumulate(res.begin(), res.end(),0);
		return res_value;
	}
protected:
private:
};
