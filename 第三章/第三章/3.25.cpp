#include<iostream>
#include<vector>
using namespace std;
int main3_25()
{
	vector<unsigned> scores(11, 0);
	unsigned grade;
	auto itbg = scores.begin();
	while (cin >> grade)
	{
		if (grade <= 100)
		{
			(*(itbg+grade/10))++;
		}	
	}
	for (auto a : scores)
		cout << a << " ";
	return 0;
}