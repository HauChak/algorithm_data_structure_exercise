#include"pch.h"
#define Max(a,b) a*b
using namespace std;

string& demo()
{
	string a = "abc";
	return a;
}
int main()
{
	vector<int> nums = { 10, 5,3,3,not_T,not_T,-2,not_T,not_T,2,not_T,1,not_T,not_T, -3, not_T,11 };
	TreeNode*root = nullptr;
	initialize_tree(root, nums);
	PathSumThree demo;
	int res=demo.pathSum(root, 8);
	system("pause");
	return 0;
}