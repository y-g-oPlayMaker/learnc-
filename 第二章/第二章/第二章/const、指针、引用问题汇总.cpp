#include<iostream>
int main33_()
{
	int v1 = 3;
	double v2 = 5;
	const int v1_ = 7;
	const double v2_ = 9.0;
	//�����������
	const int * p1 = &v1_;
	//const int *pv = 9;
	//"int" ���͵�ֵ�������ڳ�ʼ�� "const int *" ���͵�ʵ��	
	//constָ���ʼ��������ȫ��ͬ���ͻ��const����ͬ�������� �ı�����ַ

	//p1 = &v2;
	//���ܽ� "double *" ���͵�ֵ���䵽 "const int *" 

	//p1 = &v2_;
	//���ܽ� "const double *" ���͵�ֵ���䵽 "const int *" 
	
	p1 = &v1;
	//���Խ��ѳ�ʼ����ָ��ָ���const����ͬ�������ͱ���

	const double * p2 = &v2_;//double����ͬ��
	//p1 = p2;  ���� ���ܽ� "const double *" ���͵�ֵ���䵽 "const int *"
	
	//int *p = &v1_;����  �������÷�const��ָ��ָ��const������
	//"const int *" ���͵�ֵ�������ڳ�ʼ�� "int *" ���͵�ʵ��	

	//**********����ָ��ͬ��ָͨ�룬ֻ�������ַ���ܸı�***********


	//���ã�1.��const�͵�����һ���������õ�const�ͱ����ϣ�ָͬ�룻
	//		2.���ñ���������ͬ���ͱ����ϣ�
	//      3.�������const�����ÿ������ڷ�const�ͱ����ϣ�ָͬ��
	//		��ֻ��ָ��������Լ���Ϊ�Լ���ָ����Ϊconst���ɸģ����������������ģ�
	//		4.const int���öԷ�const double���Ϳ��Զ�ת����
	//			const int temp=dval�� const int &r1=temp��
	//			����tempΪ��ʱ������ϵͳ���ɵ�const������
	//		5.ͬ�ϣ����Բ�ͬ���͵ķ�const���úͱ������ܻ���ת����
	//			��Ϊ�ᵼ�·�const���ø��� һ��consst����ʱ���ϣ�
	//		6.const�������õĳ�ʼ������Ϊ�����ת��Ϊ�������͵ı��ʽ��
	const int &r1 = 3;
	const int &r2 = 5.5;
	//int &r3 = 1;�������const���У�
	return 0; 
}
