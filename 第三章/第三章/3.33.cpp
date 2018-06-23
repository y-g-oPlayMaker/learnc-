#include<iostream>
#include<vector>
using namespace std;
//如果不初始化则数组中的元素为不确定的随机数！！
int main3_33()
{
	unsigned scores[11];
	unsigned grade;
	while (cin >> grade)
	{
		if (grade <= 100)
		{
			++scores[grade / 10];
		}
	}
	for (auto a : scores)
		cout << a << " ";
	return 0;
}