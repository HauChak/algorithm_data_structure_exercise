#pragma once
#include "InitializeTree.h"

class BSTIterator {
public:
	TreeNode* _root;
	vector<int> ele;

	void pre_travel(TreeNode* root)
	{
		if (!root)return;
		pre_travel(root->left);
		ele.push_back(root->val);
		pre_travel(root->right);
	}
	BSTIterator(TreeNode* root) {
		_root = root;
		pre_travel(root);
	}

	/** @return the next smallest number */
	int next() {
		if (hasNext())
		{
			ele.erase(ele.begin());
			return  ele[0]; 
		}
	}


	/** @return whether we have a next smallest number */
	bool hasNext() {
		if (!ele.empty())
			return true;
		return false;
	}
};
