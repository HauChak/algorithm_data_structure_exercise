#pragma once
#include "InitializeTree.h"

class BinaryTreeTilt
{
public:
	int findTilt(TreeNode* root) {
		int res = 0;
		postorder(root, res);
		return res;
	}
	int postorder(TreeNode* node, int& res) {
		if (!node) return 0;
		int leftSum = postorder(node->left, res);
		int rightSum = postorder(node->right, res);
		res += abs(leftSum - rightSum);
		return leftSum + rightSum + node->val;
	}
protected:
private:
};
