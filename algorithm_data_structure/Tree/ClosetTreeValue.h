#pragma once
#include "InitializeTree.h"
#include <numeric>

using namespace std;

class ClosetTreeValue
{
public:
	int get_sl(TreeNode* root, double value)
	{
		double gap = INT_MAX;
		int res = root->val;
		while (root)
		{
			if (abs(root->val - value)<gap)
			{
				gap = abs(root->val - value);
				res = root->val;
			}
			if (value > root->val)
				root = root->right;
			else if (value < root->val)
				root = root->left;
			else
				break;
		}
		return res;
	}
};
