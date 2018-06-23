#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
int main3_16()
{
	string mystirng;
	vector<string> text;
	while (cin >> mystirng)
		text.push_back(mystirng);
	for (auto a : text)
		cout << a << endl;
	return 0;
}