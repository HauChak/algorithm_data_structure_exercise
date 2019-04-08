#include"pch.h"
#define Max(a,b) a*b
using namespace std;

int main()
{
	vector<int> nums = { 1,2,5,3,2,2,4,5 };
	ListNode*head = initialize_linklist(nums);
	PartitionList demo;
	ListNode* newhead = demo.partition_list(head,3);
	system("pause");
	return 0;
}