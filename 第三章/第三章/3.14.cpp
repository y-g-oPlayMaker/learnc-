#include<iostream>
#include<string>
#include<vector>
using std::cout; using std::cin; using std::endl;
using std::vector; using std::string;
int main3_14()
{
	string mystirng;
	vector<string> text;
	while (cin >> mystirng)
		text.push_back(mystirng);
	return 0;
}