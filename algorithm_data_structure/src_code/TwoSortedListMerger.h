#pragma once
#include "LinkListInitializer.h"
#include <cstddef>

class TwoSortedListMerger
{
public:
	TwoSortedListMerger() {};
	~TwoSortedListMerger() {};
	ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
		ListNode* begin=new ListNode(0);
		ListNode* start = begin;
		while (l1 != NULL&&l2 != NULL)
		{
			ListNode *tmp = new ListNode(0);
			if (l1->val < l2->val)
			{
				tmp->val = l1->val;
				l1 = l1->next;
			}

			else
			{
				tmp->val = l2->val;
				l2 = l2->next;
			}
			start->next = tmp;
			start = tmp;
		}
		if (l1 != NULL)
			start->next = l1;
		else  if (l2 != NULL)
			start->next = l2;
		return begin->next;
	}
private:

};
