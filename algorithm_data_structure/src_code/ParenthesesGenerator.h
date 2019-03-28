#pragma once
#include <vector>
#include <string>
#include <stack>
using namespace std;

class ParenthesesGenerator
{
public:

	vector<string> res;

	void help_sl(int left,int right,string out)
	{
		if (left > right)return;
		if (left == 0 && right == 0)res.push_back(out);
		else
		{
			if (left > 0)help_sl(left - 1, right, out + "(");
			if (right > 0)help_sl(left, right - 1, out + ")");
		}
	}
	vector<string> generateParenthesis(int n) {
		help_sl(n, n, "");
		return res;
	}
protected:
private:
};