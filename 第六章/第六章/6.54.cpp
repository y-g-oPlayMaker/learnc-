#include<iostream>
#include<vector>
using namespace std;

int function6_54(int, int) { return 0; };
int(*pf)(int, int);//����һ���������ͺ�����ָ�룻

vector<int(*)(int,int)> v1;//����ָ�������
vector<decltype(pf)> v2;//ͬ��

