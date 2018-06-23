#include<iostream>
int main1_11()
{
	int v1 = 0, v2 = 0, val = 0;
	std::cout << "Enter two number " << std::endl;
	std::cin >> v1 >> v2;
	if (v1 > v2) {
		val = v2;
		while (val < v1) {
			val++;
			if (val == v1)
				break;
			else std::cout << val << "\t";
		}
	}
	else {
		val = v1;
		while (val < v2) {
			val++;
			if (val == v2)
				break;
			else std::cout << val << "\t";
		}
	}
	return 0;
}