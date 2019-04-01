#pragma once
#include "LinkListInitializer.h"
class DuplicatesEleRemover
{
public:
	DuplicatesEleRemover() {};
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == nullptr || head->next == nullptr)return head;
		ListNode*new_head = new ListNode(-1),*prev= new_head;
		new_head->next = head;
		while (prev->next)
		{
			ListNode*cur = prev->next;
			while (cur->next&&cur->next->val == cur->val)
			{
				cur = cur->next;
			}
			if (cur != prev->next)prev->next = cur->next;
			else prev = prev->next;
		}
		return new_head->next;
	}
	~DuplicatesEleRemover() {};

private:

};