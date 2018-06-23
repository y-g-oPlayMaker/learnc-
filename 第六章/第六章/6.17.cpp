#include<iostream>
#include<string>
using namespace std;
bool judgeString(const string &s);
string& rewriteString(string &s);
int main6_17()
{
	string str1 = "abcAAA";
	cout << str1 << endl;
	cout << string(judgeString(str1) ? "has" : "no has");
	cout << endl;
	cout << rewriteString(str1) << endl;
	return 0;
}


bool judgeString(const string &s)
{
	int i = 0;
	while (i != s.size())
	{
		if (s[i] <= 'Z' && s[i] >= 'A')
			return true;
		++i;
	}
	return false;
}

string& rewriteString(string&s)
{
	int i = 0;
	while (i != s.size())
	{
		if (s[i] <= 'Z' && s[i] >= 'A')
			s[i] += 'a' - 'A';
		++i;
	}
	return s;
}



