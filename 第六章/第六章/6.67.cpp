#include<iostream>
#include<string>
using namespace std;
typedef string arrS[10];//arrS ��һ�����ͱ���������ʾ�������Ǻ���10��string�����飻
arrS (&function1()) ;//ͬ��һ�⣬����һ��ָ�룬ָ��һ��arrS���͵ĵ�ָ�룻
using arrS2 = string[10];//arrS�ĵȼ�������
arrS2(&function2()) ;

auto function3()->string(&)[10];//c++11��β�÷������ͣ�auto����ʽ�������ķ�������Ϊ->���ź������

string mystr67[10];
inline decltype(mystr67) *function4() {};//����һ��ָ�룬ָ��mystr������  ��СΪ10��str�����飻

//��auto ����ֱ������������״�����Ѿ�ȷ����Ҫ���ص����飬��decltype�����㣬�������ͱ�����ͨ��һЩ��