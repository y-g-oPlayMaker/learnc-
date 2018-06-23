#include<iostream>
#include<vector>
using namespace std;
int main3_32()
{
	int arr[10];
	for (int i = 0; i != 10; i++)
	{
		arr[i] = i;
	}
	int arr2[10];
	for (int i = 0; i !=10; i++)
	{
		arr2[i] = arr[i];
	}
	for (auto a : arr2)
	{
		cout << a << " ";
	}
	cout << sizeof(arr) << endl;//sizeof(arr)的值为40字节长度而不是数字个数（int4字节）
					    //如果for循环里用sizeof判断就会报出数组越界异常！！
	//以下是vector的
	vector<int> vt;
	for (int i = 0; i != 10; i++)//范围for(auto a:vt){/*/}只能对vt读写而不能添加元素；
		vt.push_back(i);
	for (auto a : vt)
		cout << a << " ";
	return 0;            
}