#include<iostream>
#include<string>
using std::cout; using std::cin; using std::endl;
using std::string;
int main3_4()
{
	string s1, s2;
	cin>>s1>>s2;
	if (s1.size() > s2.size())
		cout << s1;
	else if(s1.size() < s2.size())
		cout << s2;
	else cout << "µÈ³¤" << endl;
	return 0;
}