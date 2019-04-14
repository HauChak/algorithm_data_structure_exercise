#pragma once
#include "InitializeTree.h"
#include <algorithm>

using namespace std;

class TreeMinimumDepth
{
public:
	TreeMinimumDepth();
	int minDepth(TreeNode* root) {
		if (!root)return 0;
		if (!root->left&&root->right)return 1 + minDepth(root->right);
		else if (root->left && !root->right)return 1 + minDepth(root->left);
		else
		return 1 + min(minDepth(root->left), minDepth(root->right));
	}
	~TreeMinimumDepth();

private:

};

TreeMinimumDepth::TreeMinimumDepth()
{
}

TreeMinimumDepth::~TreeMinimumDepth()
{
}
