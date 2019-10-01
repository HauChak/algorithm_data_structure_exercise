#include "algorithm_data_structure/src_code/pch.h"
#include <vector>
#include<unordered_map>
#include<string>
#define Max(a,b) a*b
using namespace std;

void test(ListNode* given)
{
	ListNode* tmp = new ListNode(10);
	given= tmp;
}

struct Point
{
	int x;
	int y;
};

int main()
{
	Point p={1,2};
	vector<int>src = { 1,1,1,0 };
	int a[]={1,2,3};
	string ss ="hello world";
	string sub_str = ss.substr(0,5);
	string::iterator it =ss.begin();
	for(;it!=ss.end();++it)
		cout<<*it<<endl;
	cout<<a<<endl;
	cout<<"hello world"<<endl;
	JumpGame demo;
	bool res = demo.canJump(src);
	cout<<res<<endl;
	//getchar();
	return 0;
}