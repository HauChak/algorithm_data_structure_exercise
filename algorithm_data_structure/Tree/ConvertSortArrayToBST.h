#pragma once
#include "InitializeTree.h"

using namespace std;

class ConvertSortArrayToBST
{
public:
	void help_sl(vector<int>& nums,int left,int right, TreeNode*& root)
	{
		if (left > right)return ;
		int mid_idx = (left + right+1) / 2;
		root = new TreeNode(nums[mid_idx]);
		help_sl(nums, left, mid_idx - 1, root->left);
		help_sl(nums, mid_idx + 1, right, root->right);
	}
	TreeNode* sortedArrayToBST(vector<int>& nums) {
		TreeNode* root = nullptr;
		help_sl(nums, 0, nums.size() - 1, root);
		return root;
	}
protected:
private:
};