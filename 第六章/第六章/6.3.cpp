#include<iostream>
int main6_3()
{
	int fact(int val);
	int val;
	std::cin >> val;
	std::cout<<fact(val);
	return 0;

}



int fact(int val)
{
	int ret = 1;
	while (val >1) 
	{
		ret *= val;
		--val;
	}
	return ret;
}