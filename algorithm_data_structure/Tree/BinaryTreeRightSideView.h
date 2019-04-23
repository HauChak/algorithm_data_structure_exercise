#pragma once
#include "InitializeTree.h"
#include<vector>
#include <queue>

using namespace std;

class BinaryTreeRightSideView
{
public:
	vector<int> rightSideView(TreeNode* root) {
		if (!root)return {};
		vector<int>res;
		queue<TreeNode*>q;
		q.push(root);
		while (!q.empty())
		{
			res.push_back(q.back()->val);
			int size = q.size();//commont
			for (auto it = 0; it < size; ++it)
			{
				TreeNode* tmp = q.front();
				q.pop();
				if (tmp->left)q.push(tmp->left);
				if (tmp->right)q.push(tmp->right);
			}
		}
		return res;
	}
protected:
private:
};
