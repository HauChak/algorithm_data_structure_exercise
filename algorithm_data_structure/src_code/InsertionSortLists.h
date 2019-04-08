#pragma once
#include "LinkListInitializer.h"

using namespace std;

class InsertionSortLists
{
public:
	InsertionSortLists() {};
	ListNode* insertionSortList(ListNode* head) {
		if (!head || !head->next)return head;
		ListNode*dummy = new ListNode(-1), *cur = dummy;
		while (head)
		{
			ListNode *t = head->next;
			cur = dummy;
			while (cur->next&&cur->next->val <= head->val)
			{
				cur = cur->next;
			}
			head->next = cur->next;
			cur->next = head;
			head = t;
		}
		return dummy->next;
	}
	~InsertionSortLists() {};

private:

};

