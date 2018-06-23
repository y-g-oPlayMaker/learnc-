#include<iostream>
int compare(int val1, const int const*val2);
int main6_21()
{
	int val1 = 23;
	int val3 = 33;
	int* val2 = &val3;
	std::cout<<compare(val1,val2);
	return 0;
}

int compare(int val1, const int const *val2)
{
	return val1 >= *val2 ? val1 : *val2;
}