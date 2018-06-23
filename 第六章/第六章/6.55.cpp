#include<iostream>
#include<vector>
using namespace std;

int intAccumlate(int lhs, int rhs){	return lhs + rhs;}
int intReduce(int lhs, int rhs){return lhs - rhs;}
int intChengfa(int lhs, int rhs){return lhs * rhs;}
int intChufa(int lhs, int rhs){	return lhs / rhs;}

vector<int(*)(int, int)> v55{intAccumlate,intReduce,intChengfa,intChufa};
int main6_55()
{
	cout << v55[0](1, 2) << endl;
	cout << v55[1](1, 2) << endl;
	cout << v55[2](1, 2) << endl;
	cout << v55[3](1, 2) << endl;
	return 0;
}
