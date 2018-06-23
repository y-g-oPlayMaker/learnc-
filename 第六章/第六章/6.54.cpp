#include<iostream>
#include<vector>
using namespace std;

int function6_54(int, int) { return 0; };
int(*pf)(int, int);//声明一个上述类型函数的指针；

vector<int(*)(int,int)> v1;//函数指针的向量
vector<decltype(pf)> v2;//同上

