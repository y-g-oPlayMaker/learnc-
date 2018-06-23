#include<iostream>
#include<vector>
using std::cout; using std::cin; using std::endl;
using std::vector;
int main3_23()
{
	vector<int> intvt;
	int t = 0;
	while (cin >> t)
	{
		intvt.push_back(t);
	}
	auto itbg = intvt.begin();
	auto ited = intvt.end();
	for (auto a : intvt)
	{
		cout << a << " ";
	}
	cout << endl;
	while (itbg != ited)
	{
		(*itbg) *= 2;//将容器中每个整数变为二倍；
		cout<<*itbg<<" ";//输出改变后的成员
		++itbg;
	}
	return 0;
}