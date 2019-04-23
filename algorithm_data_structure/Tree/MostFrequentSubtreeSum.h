#pragma once
#include "InitializeTree.h"
#include <vector>
#include<unordered_map>
#include <algorithm>
using namespace std;

class MostFrequentSubtreeSum
{
public:
	int pretravel(TreeNode* root,unordered_map<int,int>&res)
	{
		if (!root)return 0;
		int val = root->val;
		int left = pretravel(root->left, res);
		int right = pretravel(root->right, res);
		int tmp_sum = val + left + right;
		res[tmp_sum]++;
		return tmp_sum;
	}
	vector<int> findFrequentTreeSum(TreeNode* root) {
		unordered_map<int, int>m;
		vector<int>res;
		pretravel(root, m);
		//sort(m.begin(), m.end(), [](pair<int, int>a, pair<int, int>b) {return a.second > b.second; });
		int max_frequency = m.begin()->second;
		for (auto it = m.begin(); it != m.end(); ++it)
		{
			if (it->second == max_frequency)
				res.push_back(it->first);
		}
		return res;
	}
	
protected:
private:
};
