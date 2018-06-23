#include<iostream>
#include<string>
using std::cout; using std::cin; using std::endl;
using std::string;
int main3_8()
{
	string s1;
	cin >> s1;
	cout << s1 << endl;
	decltype(s1.size()) n=s1.size();
	--n;
	while (n>0)//此处如果使用n>=0的话会运行错误
	{
		s1[n] = toupper(s1[n]);
		--n;//因为n为无符号类型所以n的值最后会等于此类型的最大值
	}
	s1[0] = toupper(s1[0]);
	cout << s1;
	return 0;
}