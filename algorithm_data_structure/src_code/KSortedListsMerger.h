#pragma once
#include <vector>
#include <algorithm>
#include "LinkListInitializer.h"
using namespace std;



class KSortedListsMerger
{
public:
	KSortedListsMerger() {};
	bool is_valid_beyond_one(vector<ListNode*>&lists)
	{
		int count = 0;
		for (int i = 0; i < lists.size(); ++i)
			if (lists[i])
				count++;
		if (count >= 1)
			return true;
		return false;
	}
	ListNode* mergeKLists(vector<ListNode*>& lists) {
		ListNode*begin = new ListNode(-1), *cur = begin;
		int idx = 0;
		while (is_valid_beyond_one(lists))
		{
			int min_val = INT_MAX;
			for (int i = 0; i < lists.size(); ++i)
			{
				if (lists[i] && lists[i]->val <= min_val)
				{
					cur->next = lists[i];
					min_val = lists[i]->val;
					idx = i;
				}
				if (i == lists.size() - 1)
				{
					cur = cur->next;
					lists[idx] = lists[idx]->next;
				}
			}
		}
		cur->next = lists[idx];
		return begin->next;
	}

	ListNode*merge_two_list(ListNode*l1, ListNode*l2)
	{
		if (l1 == nullptr)return l2;
		if (l2 == nullptr)return l1;
		if (l1->val < l2->val)
		{
			l1->next = merge_two_list(l1->next, l2);
			return l1;
		}
		else
		{
			l2->next = merge_two_list(l1, l2->next);
			return  l2;
		}
	}

	ListNode* help_sl(vector<ListNode*>&lists, int left, int right)
	{
		
		if (left > right)return nullptr;
		if (left == right)return lists[left];
		int mid = (left + right) / 2;
		ListNode*left_node = help_sl(lists, left, mid);
		ListNode*right_node = help_sl(lists, mid + 1, right);
		return merge_two_list(left_node, right_node);
	}

	ListNode* mergeKLists(vector<ListNode*>& lists)
	{
		return help_sl(lists, 0, lists.size() - 1);
	}



~KSortedListsMerger() {};

};

