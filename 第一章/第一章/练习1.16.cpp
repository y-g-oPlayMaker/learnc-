#include<iostream>
int main1_16()
{
	int val = 0, sum = 0;
	std::cout << "Enter " << std::endl;//Êä³öÌáÊ¾
	while (std::cin >> val)
		sum += val;
	std::cout << "sum is " << sum << std::endl;
	return 0;
}