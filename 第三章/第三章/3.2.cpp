#include<iostream>
#include<string>
using std::string;
using std::cout; using std::cin; using std::endl;
int main3_2() 
{
	string s1, s2;
	cout << "输入一整行" << endl;
	getline(cin,s1);
	cout << s1 << endl;
	cout << "输入一整行读取一个" << endl;
	cin >> s2;
	cout << s2;
	return 0;
}