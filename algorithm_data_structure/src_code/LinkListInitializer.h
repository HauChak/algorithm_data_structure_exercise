#pragma once
#include <vector>

using namespace std;
struct ListNode {
	int val;
	ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};


ListNode * initialize_linklist(vector<int>nums)
{
	ListNode*begin = new ListNode(-1), *cur = begin;
	for (int i = 0; i < nums.size(); ++i)
	{
		ListNode* tmp = new ListNode(nums[i]);
		cur->next = tmp;
		cur = cur->next;
	}
	return begin->next;
}