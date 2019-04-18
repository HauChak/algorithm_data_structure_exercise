#pragma once
#include <vector>
#include <unordered_map>
#include <stack>
#include "InitializeTree.h"

using namespace std;

class PosterTravelIterator
{
public:
	void help(TreeNode* root, vector<int>& res, stack<unordered_map<TreeNode*, bool>>m)
	{
		if (!root)return;
		while (root||!m.empty())
		{
			while (root->left)
			{
				unordered_map<TreeNode*, bool>tmp;
				tmp[root] = true;
				m.push(tmp);
				root = root->left;
			}
			unordered_map<TreeNode*, bool>a=m.top();
			auto it = a.begin();
			if (it->second)
			{
				res.push_back(it->first->val);
				m.pop();
				a[it->first] = false;
				m.push(a);
				root = root->right;
			}
			else
			{
				m.pop();
				unordered_map<TreeNode*, bool>b = m.top();
				auto it = b.begin();
				root = it->first;
			}
		}
	}
	vector<int> postorderTraversal(TreeNode* root) {
			
	}
};

