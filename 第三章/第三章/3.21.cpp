#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::endl;
using std::string; using std::vector;
int main3_21()
{
	string mystirng;
	vector<string> text;
	while (cin >> mystirng)
		text.push_back(mystirng);
	auto itbegin = text.begin();
	auto itend = text.end();
	while (itbegin != itend)
	{
		cout << *itbegin << endl;
		++itbegin;
	}return 0;
}