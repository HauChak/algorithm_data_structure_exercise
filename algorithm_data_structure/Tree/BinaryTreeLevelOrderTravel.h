#pragma once
#include "InitializeTree.h"
#include <vector>
#include <map>
using namespace std;


class BinaryTreeLevelOrderTravel
{
	void previsit(TreeNode*root, int height,map<int,vector<int>>&s)
	{
		if (!root)return;
		s[height].push_back(root->val);
		previsit(root->left, height + 1, s);
		previsit(root->right, height + 1, s);
	}
	vector<vector<int>> levelOrder(TreeNode* root) {
		map<int, vector<int>>s;
		vector<vector<int>>res;
		previsit(root, 0, s);
		for (auto it = s.begin(); it != s.end(); ++it)
		{
			res.push_back(it->second);
		}
	}
};
