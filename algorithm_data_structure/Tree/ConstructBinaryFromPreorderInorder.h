#pragma once
#include "InitializeTree.h"
#include <vector>

using namespace std;


class ConstructBinaryFromPreorderInorder
{
public:
	TreeNode* buildtree(vector<int>& preorder, int pleft, int pright, vector<int>& inorder, int inleft, int inright)
	{
		if (pleft > pright || inleft > inright)return nullptr;
		int i = 0;
		for (i = inleft; i < inright; ++i)
		{
			if(preorder[pleft]==inorder[i])
				break;
		}
		TreeNode* cur = new TreeNode(preorder[pleft]);
		cur->left = buildtree(preorder, pleft + 1, pleft + i - inleft,inorder, inleft, i - 1);
		cur->right= buildtree(preorder, pleft+i-inleft+1, pright,inorder, i+1,inright);
		return cur;
	}
	TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
		return buildtree(preorder, 0, preorder.size() - 1, inorder, 0, inorder.size() - 1);
	}
protected:
private:
};