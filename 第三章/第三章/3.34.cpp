#include<iostream>
using namespace std;
int main3_34() 
{
	int arr[10];
	for (int i = 0; i != 10; i++)
	{
		*(arr+i) = 0;
	}
	for (auto a : arr)
	{
		cout << a << " ";
	}
	cout << endl;
	return 0;
}