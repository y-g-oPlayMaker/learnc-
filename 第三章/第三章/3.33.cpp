#include<iostream>
#include<vector>
using namespace std;
//�������ʼ���������е�Ԫ��Ϊ��ȷ�������������
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