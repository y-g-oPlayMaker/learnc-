#include<iostream>
using namespace std;
void swap(int*p, int*q);
int main6_22()
{
	cout << "��������������:";
	int val1, val2;
	cin >> val1 >> val2;
	int *val1_pointer = &val1;//��val2�ĵ�ַ������Ӧָ��  
	int *val2_pointer = &val2;//��val2�ĵ�ַ������Ӧָ��  
	cout << "����֮ǰ��ָ����ָ����" << *val1_pointer << *val2_pointer << endl;
	swap(val1_pointer, val2_pointer);
	cout << "����֮����ָ����ָ����" << *val1_pointer << *val2_pointer << endl;
	return 0;
}

void swap(int*p, int*q)
{
	int*n = p;
	p = q;
	q = n;
}