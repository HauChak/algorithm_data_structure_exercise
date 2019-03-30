#include"pch.h"

using namespace std;

int main()
{
	ListNode *l1 = new ListNode(0), *l2 = new ListNode(0);
	ListNode *begin1 = l1, *begin2 = l2;
	vector<int> v1 = { 1,2,4 }, v2 = { 1,3,4 };
	for (int i = 0; i < 3; ++i)
	{
		ListNode *tmp1 = new ListNode(v1[i]);
		ListNode *tmp2 = new ListNode(v2[i]);
		begin1->next = tmp1;
		begin1 = begin1->next;
		begin2->next = tmp2;
		begin2 = begin2->next;
	}
	TwoSortedListMerger demo;
	ListNode *reslt = demo.mergeTwoLists(l1->next, l2->next);
	system("pause");
	return 0;
}