#include<iostream>
#include<string>
using namespace std;
string mystr36[10];

string ((&function())[10]);//��ʽ��Type (*function(parameter_list))[dimension]
//������Ϊ���ú�������һ�����飨��Ϊ�����޷��������������������ɿ�������ִ�еģ�
//����Ҫ����һ�������ָ�뼴�ɣ���*function��parameter������ʾ��������һ��ָ�룬���Դ�ָ������ã�
//��*function(parameter)��[dimension]��ʾ��������ά�Ⱥʹ�С��������Type ��ʾ���ͣ�
//����������������һ��