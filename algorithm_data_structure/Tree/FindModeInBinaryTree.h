#pragma once
#include "InitializeTree.h"
#include <vector>
#include <unordered_map>

using namespace std;

class FindModeInBinaryTree
{
public:
	void pretravel(TreeNode* root, unordered_map<int, int>&m)
	{
		if (!root)return;
		m[root->val]++;
		pretravel(root->left, m);
		pretravel(root->right, m);
	}
	vector<int> findMode(TreeNode* root) {
		unordered_map<int, int>m;
		vector<int>res;
		pretravel(root, m);
		int max_num = 0;
		for (auto it = m.begin(); it != m.end(); ++it)
		{
			if (it->second > max_num)
				max_num = it->second;
		}
		for (auto it = m.begin(); it != m.end(); ++it)
		{
			if (it->second == max_num)
				res.push_back(it->first);
		}
		return res;
	}
protected:
private:
};
