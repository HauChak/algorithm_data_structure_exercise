#pragma once
#include <vector>
#define not_T INT_MAX
using namespace std;
struct TreeNode
{
	int val;
	TreeNode*left;
	TreeNode*right;
	TreeNode(int x):val(x),left(nullptr),right(nullptr){}
}; 

struct Node
{
	int val;
	Node*left;
	Node*right;
	Node* next;
	Node(int x):val(x),left(nullptr),right(nullptr),next(nullptr){}
}; 

void initialize_helper(TreeNode*& root, vector<int>nums, int& idx)
{
	if (idx == nums.size())return;
	if (nums[idx] == not_T)
	{
		idx++;
		return;
	}
	root = new TreeNode(nums[idx++]);
	initialize_helper(root->left, nums, idx);
	initialize_helper(root->right, nums, idx);
}

void initialize_tree(TreeNode*&root, vector<int>nums)
{
	if (nums.empty())return;
	int start = 0;
	initialize_helper(root, nums, start);
}


