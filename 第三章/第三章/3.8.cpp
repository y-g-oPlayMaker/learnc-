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
	while (n>0)//�˴����ʹ��n>=0�Ļ������д���
	{
		s1[n] = toupper(s1[n]);
		--n;//��ΪnΪ�޷�����������n��ֵ������ڴ����͵����ֵ
	}
	s1[0] = toupper(s1[0]);
	cout << s1;
	return 0;
}