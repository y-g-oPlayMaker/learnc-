#include<iostream>
#include<string>
using namespace std;
typedef string arrS[10];//arrS 是一个类型别名，他表示的类型是含有10个string的数组；
arrS (&function1()) ;//同上一题，返回一个指针，指向一个arrS类型的的指针；
using arrS2 = string[10];//arrS的等价声明；
arrS2(&function2()) ;

auto function3()->string(&)[10];//c++11的尾置返回类型，auto是形式，真正的返回类型为->符号后的类型

string mystr67[10];
inline decltype(mystr67) *function4() {};//返回一个指针，指向mystr的类型  大小为10的str的数组；

//用auto 更佳直接清楚，不容易错，如果已经确定了要返回的数组，用decltype更方便，，，类型别名更通用一些；