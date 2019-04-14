#pragma once
#include <vector>
#include "InitializeTree.h"

using namespace std;

class UniqueBinarySearchTreeTwo
{
	vector<TreeNode*>*generate_tree_dfs(int start, int end)
	{
		vector<TreeNode*>*subtree = new vector<TreeNode *>();		
		if (start > end)subtree->push_back(nullptr);
		else
		{
			for (int i = start; i <= end; ++i)
			{
				vector<TreeNode*>*left_subtree = generate_tree_dfs(start, i - 1);
				vector<TreeNode*>*right_subtree = generate_tree_dfs(i+1, end);
				for (auto j = 0; j < left_subtree->size(); ++j)
				{
					for (auto k = 0; k < right_subtree->size(); ++k)
					{
						TreeNode* tmp = new TreeNode(i);
						tmp->left = (*left_subtree)[j];
						tmp->right = (*right_subtree)[k];
						subtree->push_back(tmp);
					}
				}
			}
			
		}
		return subtree;
	}
	vector<TreeNode*> generateTrees(int n) {
		if (n == 0) return {};
		return *generate_tree_dfs(1, n);
	}

};
