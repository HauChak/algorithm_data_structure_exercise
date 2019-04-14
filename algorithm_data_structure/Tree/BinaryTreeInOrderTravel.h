#pragma once
#include "InitializeTree.h"
#include <vector>
#include <stack>

using namespace std;
class BinaryTreeInOrderTravel
{
public:
	vector<int> inorderTraversal(TreeNode* root) {
		vector<int>res;
		stack<TreeNode*>s;
		TreeNode*p = root;
		while (p|| !s.empty())
		{
			while (p)
			{
				s.push(p);
				p= p->left;
			}
			p = s.top(); s.pop();
			res.push_back(p->val);
			p = p->right;
		}
		return res;
	}
};
