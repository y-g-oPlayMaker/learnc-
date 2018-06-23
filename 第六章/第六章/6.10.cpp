#include<iostream>
int main6_10()
{
	int val1 = 1, val2 = 2;
	void function(int*p, int *q);
	function(&val1, &val2);
	return 0;
}

void function(int* p,int *q)
{
	int t = *p;
	*p = *q;
	*q = t;
	std::cout << "p =" << *p << ", q =" << *q << std::endl;
}