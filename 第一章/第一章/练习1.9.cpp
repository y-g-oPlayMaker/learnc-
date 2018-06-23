#include<iostream>
int main1_9()
{
	int sum = 0,val = 50;
	while (val <= 100) {
		sum += val;
		++val;
	}
	std::cout << "val is " << val << "sum from 50 to 100 is " << sum << std::endl;
	return 0;
}