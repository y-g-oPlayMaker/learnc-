#include<iostream>
#include<vector>
using namespace std;
int main3_24()
{
	vector<int> intv;
	int t = 0;
	while (cin >> t)
	{
		intv.push_back(t);
	}
	auto itbg = intv.begin();
	auto ited = intv.end()-1;//ited�������һ��Ԫ�ض���β��
	while (itbg != ited&&itbg!=ited-1)
	{
		cout << *(itbg++) + *(ited--) << " ";
	}
	if (itbg == ited)//���Ϊ���������֣�
	{
		cout << *itbg;
	}
	return 0;
}