#include<iostream>
int main6_7()
{
	int function();
	while (true) 
	{
		std::cout << function();
		std::cin.get();
	}
	return 0;
}

int function()
{
	static int val = 0;
	return val++;
}
