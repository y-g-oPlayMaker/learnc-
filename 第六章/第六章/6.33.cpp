#include<iostream>
#include<vector>
using namespace std;
void put(vector<int> v1, size_t size);
int main6_33()
{
	vector<int> myvec{123,345,456,567,767,679};
	put(myvec,myvec.size());
	return 0;
}

void put(vector<int> v1,size_t size)
{
	if (size!=1)
		put(v1,size-1);//????????
	cout << v1[size-1] << endl;
}
