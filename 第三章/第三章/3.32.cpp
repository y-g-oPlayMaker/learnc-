#include<iostream>
#include<vector>
using namespace std;
int main3_32()
{
	int arr[10];
	for (int i = 0; i != 10; i++)
	{
		arr[i] = i;
	}
	int arr2[10];
	for (int i = 0; i !=10; i++)
	{
		arr2[i] = arr[i];
	}
	for (auto a : arr2)
	{
		cout << a << " ";
	}
	cout << sizeof(arr) << endl;//sizeof(arr)��ֵΪ40�ֽڳ��ȶ��������ָ�����int4�ֽڣ�
					    //���forѭ������sizeof�жϾͻᱨ������Խ���쳣����
	//������vector��
	vector<int> vt;
	for (int i = 0; i != 10; i++)//��Χfor(auto a:vt){/*/}ֻ�ܶ�vt��д���������Ԫ�أ�
		vt.push_back(i);
	for (auto a : vt)
		cout << a << " ";
	return 0;            
}