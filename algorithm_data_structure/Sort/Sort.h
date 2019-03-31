#pragma once
#include <algorithm>
#include <vector>
using namespace std;

void swap(int &a, int &b)
{
	int temp = a;
	a = b;
	b = temp;
}

void InsertionSort(vector<int>&nums)
{
	size_t n = nums.size();
	if (n <= 1)return;
	for (int i = 1; i < n; ++i)
	{
		int tmp = nums[i], j;
		for (j = i; j > 0 && nums[j - 1] > tmp; --j)
		{
			nums[j] = nums[j - 1];
		}
		nums[j] = tmp;
	}
}


void shell_sort(vector<int>&nums)
{
	if (nums.empty())return;
	size_t n = nums.size();
	for (int incre = n / 2; incre > 0; incre = incre / 2)
	{
		for (int i = incre; i < n; ++i)
		{
			int temp = nums[i], j;
			for (j = i; j >= incre; j -= incre)
			{
				if (nums[j - incre] > temp)
				{
					nums[j] = nums[j - incre];
				}
				else break;
			}
			nums[j] = temp;
		}
	}
}


void quick_sort(vector<int>&nums, int left, int right)
{
	if (nums.size() <= 1||left>=right)return;
	int start = nums[left], i = left, j = right;
	while (true)
	{
		while (nums[j] >= start&&i<j) { j--; };
		while (nums[i] <= start&&i<j) { i++; };
		if (i < j)
		{
			swap(nums[i], nums[j]);
		}
		else
		{
			break;
		}
	}

	swap(nums[j], nums[left]);
	quick_sort(nums, left, i - 1);
	quick_sort(nums, i + 1, right);
}


void bubble_sort(vector<int>&nums)
{
	if (nums.size() <= 1)return;
	for (int i = 0; i < nums.size(); i++)
	{
		for (int j = 1; j < nums.size() - i; ++j)
			if (nums[j - 1] > nums[j])
				swap(nums[j - 1], nums[j]);
	}
}