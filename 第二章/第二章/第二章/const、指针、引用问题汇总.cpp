#include<iostream>
int main33_()
{
	int v1 = 3;
	double v2 = 5;
	const int v1_ = 7;
	const double v2_ = 9.0;
	//定义各种类型
	const int * p1 = &v1_;
	//const int *pv = 9;
	//"int" 类型的值不能用于初始化 "const int *" 类型的实体	
	//const指针初始化必须完全相同类型或非const型相同数据类型 的变量地址

	//p1 = &v2;
	//不能将 "double *" 类型的值分配到 "const int *" 

	//p1 = &v2_;
	//不能将 "const double *" 类型的值分配到 "const int *" 
	
	p1 = &v1;
	//可以将已初始化的指针指向非const型相同数据类型变量

	const double * p2 = &v2_;//double类型同理；
	//p1 = p2;  错误 不能将 "const double *" 类型的值分配到 "const int *"
	
	//int *p = &v1_;错误  不可以用非const型指针指向const变量；
	//"const int *" 类型的值不能用于初始化 "int *" 类型的实体	

	//**********常量指针同普通指针，只是所存地址不能改变***********


	//引用：1.非const型的引用一定不可以用到const型变量上，同指针；
	//		2.引用必须用在相同类型变量上；
	//      3.特殊情况const型引用可以用在非const型变量上，同指针
	//		（只是指针和引用自己认为自己所指变量为const不可改，可以用其他方法改）
	//		4.const int引用对非const double类型可自动转换：
	//			const int temp=dval； const int &r1=temp；
	//			其中temp为临时量，是系统生成的const常量；
	//		5.同上，所以不同类型的非const引用和变量不能互相转换，
	//			因为会导致非const引用附在 一个consst型临时量上；
	//		6.const类型引用的初始化可以为任意可转换为引用类型的表达式；
	const int &r1 = 3;
	const int &r2 = 5.5;
	//int &r3 = 1;错误而非const不行；
	return 0; 
}
