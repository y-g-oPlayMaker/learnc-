#include<iostream>
int main1_10()
{
	int sum = 0, val = 10;
	//只要val的值大于0.while循环将一直进行；
	while (val >= 0) {
		std::cout << "val is " << val << " sum is " << sum<<std::endl;
		sum += val;//sum为10--0相加之和；
		val--;//val的值自减；
	}
	return 0;
}