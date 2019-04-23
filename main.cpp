#include "algorithm_data_structure/src_code/pch.h"
#include <vector>
#define Max(a,b) a*b
using namespace std;

void test(ListNode* given)
{
	ListNode* tmp = new ListNode(10);
	given= tmp;
}

int main()
{
	//vector<int> nums = { 5,-3,not_T,not_T,2 }; TreeNode* root = nullptr;
	//initialize_tree(root, nums);
	ListNode* a = new ListNode(2);
	ListNode* b = new ListNode(3);
	ListNode* c = a;
	c->next = b;
	test(c);
	system("pause");
	return 0;
}