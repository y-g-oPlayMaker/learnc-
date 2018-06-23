#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
int main3_20()
{
	vector<int> intvector;
	int i;
	while (cin >> i)
	{
			intvector.push_back(i);
	}
	for (auto a : intvector)
		cout <<"共有"<< a <<"组数字"<< endl;
	cout << intvector.size() << endl;
	for (int j = 0; j < intvector.size()-1; j++)
	{
		cout << intvector[j] + intvector[j + 1] << endl;
	}
	return 0;
}