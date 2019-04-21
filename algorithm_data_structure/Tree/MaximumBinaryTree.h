#pragma once
#include "InitializeTree.h"

using namespace std;

class MaximumBinaryTree
{
public:
	void make_dfs(vector<int>& nums, TreeNode*& root, int left, int right)
	{
		if (left > right)return ;
		int idx = left;
		int max_value = nums[left];
		int	max_idx = idx;
		for (; idx < right; ++idx)
		{
			if (nums[idx] > max_value)
			{
				max_value = nums[idx];
				max_idx = idx;
			}
		}
		root = new TreeNode(max_value);
		make_dfs(nums, root->left, left, max_idx - 1);
		make_dfs(nums, root->right,max_idx+1, right);
	}
	TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
		TreeNode* root = nullptr;
		make_dfs(nums, root, 0, nums.size() - 1);
		return root;
	}
protected:
private:
};
