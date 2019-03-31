#include"pch.h"
#define Max(a,b) a*b
using namespace std;

int main()
{
	vector<int> nums = { 1,2,3,4,5 };
	ListNode*head = initialize_linklist(nums);
	LinkListInitializer demo;
	demo.rotateRight(head, 2);
	system("pause");
	return 0;
}