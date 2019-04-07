#pragma once
#include "LinkListInitializer.h"

using namespace std;

class DetectCycle
{
public:
	DetectCycle() {};
	ListNode *detectCycle(ListNode *head) {
		if (!head)return nullptr;
		ListNode*slow = head, *fast = head;
		while (fast&&fast->next)
		{
			
			slow = slow->next;
			fast = fast->next->next;
			if (slow == fast)
				break;
		}
		if (!fast || !fast->next)
			return nullptr;
		else
		{
			slow = head;
			while (slow&&head)
			{
				if (slow == fast)
					return fast;
				slow = slow->next;
				fast = fast->next;
			}
		}
	}
	~DetectCycle() {};

private:

};

