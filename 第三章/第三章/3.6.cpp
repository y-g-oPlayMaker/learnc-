#include<iostream>
#include<string>
using std::cout; using std::cin; using std::endl;
using std::string;
int main3_6()
{
	string s1;
	cin >> s1;
	cout << "s1 is " << s1 << endl;
	for (char &c : s1)
		c = toupper(c);
	cout << s1 << endl;
	return 0;
}