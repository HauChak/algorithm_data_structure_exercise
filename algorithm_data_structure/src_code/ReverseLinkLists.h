#pragma once
#include "LinkListInitializer.h"


class ReverseLinkLists
{
public:
	ListNode *reverse_list(ListNode*head)
	{
		if (!head || !head->next)
			return head;
		ListNode*newhead = nullptr;
		while (head)
		{
			ListNode *t = head->next;
			head->next = newhead;
			newhead = head;
			head = t;			
		}
		return newhead;
	}
protected:
private:
};