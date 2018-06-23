#include<iostream>
using namespace std;
void swap(int*p, int*q);
int main6_22()
{
	cout << "请输入两个整数:";
	int val1, val2;
	cin >> val1 >> val2;
	int *val1_pointer = &val1;//将val2的地址赋给对应指针  
	int *val2_pointer = &val2;//将val2的地址赋给对应指针  
	cout << "交换之前两指针所指对象：" << *val1_pointer << *val2_pointer << endl;
	swap(val1_pointer, val2_pointer);
	cout << "交换之后两指针所指对象：" << *val1_pointer << *val2_pointer << endl;
	return 0;
}

void swap(int*p, int*q)
{
	int*n = p;
	p = q;
	q = n;
}