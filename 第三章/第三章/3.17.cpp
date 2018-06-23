#include<iostream>
#include<string>
#include<vector>
#include<cctype>
using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
int main3_17()
{
	vector<string> StringVector;
	string mystirng;
	string StringSum;
	int i = 0;
	while (cin >> mystirng)
	{ 
		StringVector.push_back(mystirng);
		StringSum += mystirng;
	}
	for (auto &a : StringSum)
	{
		a = toupper(a);
		cout << a << endl;
	}
	return 0;
}