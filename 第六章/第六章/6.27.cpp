#include<iostream>
#include<initializer_list>
using namespace std;//�ÿɱ��β������ռ�Ϊstd��
int initSum(initializer_list<int> init1);
int main6_27()
{
	initializer_list<int> myinit{1,2,3,4,5,6,7,8,9};
	cout<<initSum(myinit);
	return 0;
}




int initSum(initializer_list<int> init1)
{
	int sum = 0;
	for(auto single:init1)
	{ 
		sum += single;
	}
	return sum;
}

