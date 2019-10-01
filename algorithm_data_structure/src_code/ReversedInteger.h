#pragma once
#include <sstream>
#include <string>
#include<climits>
#include <algorithm>

using namespace std;
class ReversedInteger
{
public:
	int reverse(int x)
	{
		stringstream ss;
		ss.clear();
		ss.str("");
		int flag=1;
		if (x < 0)
			flag = -1;

		string x_str;
		ss << x;
		ss >> x_str;

		long long long_x;
		
		std::reverse(x_str.begin(), x_str.end());
		
		ss.clear();
		ss.str("");
		ss << x_str;
		ss >> long_x;
		long_x = long_x * flag;

		if (long_x > INT_MAX || long_x < INT_MIN)
			return 0;
		return long_x;
	}
protected:
private:
};