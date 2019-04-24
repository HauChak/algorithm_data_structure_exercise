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
	vector<int>src = { 1,1,1,0 };
	JumpGame demo;
	bool res = demo.canJump(src);
	system("pause");
	return 0;
}