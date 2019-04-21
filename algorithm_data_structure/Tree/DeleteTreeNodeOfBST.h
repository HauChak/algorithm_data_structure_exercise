#pragma once
#include "InitializeTree.h"

class DeleteTreeNodeOfBST
{
public:
	void delete_node(TreeNode*& root, TreeNode*& parent)
	{
		if (!root->left)
		{
			if (root == parent->left)
				parent->left = root->right;
			else parent->right = root->right;
		}
		else if (!root->right)
		{
			if (root == parent->left)
				parent->left = root->left;
			else parent->right = root->left;
		}
		else
		{
			TreeNode* tmp_parent = root->left;
			TreeNode* cur = root->left;
			while (cur->right)
			{
				tmp_parent = cur;
				cur = cur->right;
			}
			if (tmp_parent == cur)
			{
				tmp_parent->left = nullptr;
				root->val = cur->val;
			}
			else {
				tmp_parent->right = nullptr;
				root->val = cur->val;
			}
		}
	}
	void find_val(TreeNode*& root, int key,TreeNode*&parent)
	{
		if (!root)
			return;
		if (root->val == key)
		{
			delete_node(root, parent);
			return;
		}
		if (root->val < key)
			find_val(root->right, key, root);
		else find_val(root->left, key, root);
	}
	TreeNode* deleteNode(TreeNode* root, int key) {
		if (!root)return root;
		if (root->val == key&&!root->left)
			return root->right;
		if (root->val == key && !root->right)
			return root->left;
		find_val(root, key, root);
		return root;
	}
protected:
private:
};
