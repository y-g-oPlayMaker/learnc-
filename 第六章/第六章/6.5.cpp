#include<iostream>
int main6_5()
{
	double abs2(double val);
	double val = -20;
	std::cout<<abs2(val);
	return 0;
}

double abs2(double val)
{
	return val > 0 ? val : -val;
}