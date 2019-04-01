#pragma once
#include "LinkListInitializer.h"

class DuplicatesEleRemover
{
public:
	DuplicatesEleRemover() {};
	ListNode* deleteDuplicates(ListNode* head) {
		if (head == nullptr || head->next == nullptr)return head;
		ListNode*prev = head, *cur = head->next;
		while (cur)
		{
			if (prev->val == cur->val)
			{
				prev->next = cur->next;
				cur = cur->next;
			}
			else
			{
				prev = prev->next;
				cur = cur->next;
			}
		}
		return head;
	}
	~DuplicatesEleRemover() {};

private:

};

