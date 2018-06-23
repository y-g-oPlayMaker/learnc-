#include<iostream>
int main1_13()
{
	int v1 = 0, v2 = 0, val = 0;
	std::cout << "Enter two number " << std::endl;
	std::cin >> v1 >> v2;
	if (v1 > v2) {
		val = v2;
		for (; val < v1; val++) {
			if (val == v1-1)
				break;
			else std::cout << val +1<< "\t";
		}
	}
	else {
		val = v1;
		for (; val < v2; val++) {
			if (val == v2-1)
				break;
			else std::cout << val+1 << "\t";
		}
	}
	return 0;
}