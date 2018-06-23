#include<iostream>
int main6_11()
{
	int val = 63;
	void reset(int &i);
	reset(val);
	std::cout << val << std::endl;
	return 0;
}


void reset(int &i)
{
	i = 0;
}