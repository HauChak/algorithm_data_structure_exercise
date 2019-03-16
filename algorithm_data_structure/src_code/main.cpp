#include"pch.h"

using namespace std;

int main()
{
	SaleStockTimeTwo demo;
	vector<int> price = { 7, 1, 5, 3, 6, 4 };
	int profit = demo.maxProfit(price);
	system("pause");
	return 0;
}