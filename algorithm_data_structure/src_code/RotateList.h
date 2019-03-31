#pragma once
#include "LinkListInitializer.h"


class LinkListInitializer
{
public:
	LinkListInitializer() {};
	ListNode* rotateRight(ListNode* head, int k) {
		if (k == 0)return head;
		vector<int> lin_arr;
		while (head)
		{
			lin_arr.push_back(head->val);
			head = head->next;
		}
		vector<int> lin_new(lin_arr.size());
		for (int i = 0; i < lin_arr.size(); ++i)
		{
			int idx = (lin_arr.size() + k + i) % lin_arr.size();
			lin_new[idx] = lin_arr[i];
		}
		ListNode*res = initialize_linklist(lin_new);
		return res;
	}
	~LinkListInitializer() {};

private:

};
