#pragma once
#include "LinkListInitializer.h"

using namespace std;

class PartitionList
{
public:
	ListNode*partition_list(ListNode*head, int val)
	{
		ListNode*new_head = new ListNode(-1);
		ListNode*below_val=new_head, *larger_val=new ListNode(-1);
		ListNode*large_cur = larger_val;
		while (head)
		{
			ListNode*tmp = new ListNode(head->val);
			if (head->val < val)
			{
				below_val->next = tmp;
				below_val = tmp;
			}
			else
			{
				large_cur->next = tmp;
				large_cur = tmp;
			}
			head = head->next;
		}
		below_val->next = larger_val->next;
		return new_head->next;
	}
protected:
private:
};
