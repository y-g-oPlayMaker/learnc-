#include<iostream>
using std::cout; using std::cin; using std::end;
int main3_31()
{
	int arr[10];
	for (int i = 0; i != 10; i++)
	{
		arr[i] = i;
	}
	for (auto a : arr)
	{
		cout << a << " ";
	}
	return 0;
}