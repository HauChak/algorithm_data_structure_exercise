#pragma once
#include <vector>
#include <unordered_map>
#include <stack>
#include "InitializeTree.h"

using namespace std;

class PosterTravelIterator
{
public:
	vector<int> postorderTraversal(TreeNode* root) {
		stack<TreeNode*>m;
		vector<int>res;
		while (!m.empty() || root)
		{
			if (!root)
			{
				res.insert(res.begin(), root->val);
				m.push(root);
				root = root->right;
			}
			else
			{
				TreeNode* t = m.top();
				m.pop();
				root = t->left;
			}
		}
	}
};

