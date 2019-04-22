#pragma once
#include "InitializeTree.h"

class DeleteTreeNodeOfBST
{
public:
	TreeNode* find_min(TreeNode* root)
	{
		if (!root)
			return nullptr;
		while (root->left)
			root = root->left;
		return root;
	}
	TreeNode* deleteNode(TreeNode* root, int key) {
		TreeNode* tmp_node;
		if (!root)
			return nullptr;
		if (key > root->val)
			root->right=deleteNode(root->right, key);
		else if (key < root->val)
			root->left=deleteNode(root->left, key);
		else if (root->left && root->right)
		{
			tmp_node = find_min(root->right);
			root->val = tmp_node->val;
			root->right=deleteNode(root->right, tmp_node->val);
		}
		else
		{
			if (!root->left)
				root = root->right;
			else if (!root->right)
				root = root->left;
		}
		return root;
	}
protected:
private:
};
