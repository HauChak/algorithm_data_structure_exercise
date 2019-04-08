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
	vector<int> nums = { 1,2,3,4,5 };
	ListNode*head = initialize_linklist(nums);
	const string s= demo();
	cout << s << endl;
	system("pause");
	return 0;
}