#pragma once
#include "LinkListInitializer.h"

using namespace std;

class RemoveDuplicates
{
public:
	RemoveDuplicates();
	ListNode*remove_duplicates(ListNode*head)
	{
		if (!head || !head->next)return head;
		ListNode *prev = head, *cur = head->next;
		while (cur)
		{
			if (cur->val == prev->val)
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
	~RemoveDuplicates();

private:

};

RemoveDuplicates::RemoveDuplicates()
{
}

RemoveDuplicates::~RemoveDuplicates()
{
}
