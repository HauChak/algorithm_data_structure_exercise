#pragma once
#include"InitializeTree.h"
#include<algorithm>
using namespace std;

class ValidBinaryTree
{
public:
	int max_ele(TreeNode* root)
	{
		if (!root)return INT_MIN;
		return max(max(root->val, max_ele(root->left)), max_ele(root->right));
	}

	int min_val(TreeNode* root)
	{
		if (!root)return INT_MAX;
		return min(min(root->val, min_val(root->left)), min_val(root->right));
	}
	bool previsit(TreeNode* root)
	{
		if (!root)return true;
		bool tmp_res;
		int left_val = min_val(root->left);
		if (((root->left && max_ele(root->left) < root->val) || !root->left) &&
			((root->right && min_val(root->right) > root->val) || !root->right))
			tmp_res = true;
		else tmp_res = false;
		return tmp_res && previsit(root->left) && previsit(root->right);
	}
	bool isValidBST(TreeNode * root) {
		return previsit(root);
	}
};