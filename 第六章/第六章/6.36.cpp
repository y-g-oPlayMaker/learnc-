#include<iostream>
#include<string>
using namespace std;
string mystr36[10];

string ((&function())[10]);//格式是Type (*function(parameter_list))[dimension]
//逐层理解为了让函数返回一个数组（因为数组无法拷贝，而函数返回是由拷贝函数执行的）
//所以要返回一个数组的指针即可，（*function（parameter））表示函数返回一个指针，并对此指针解引用；
//（*function(parameter)）[dimension]表示这个数组的维度和大小；最后加上Type 表示类型；
//还有其他方法，下一题