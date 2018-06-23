#include<iostream>
#include<initializer_list>
using namespace std;//该可变形参命名空间为std；
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

