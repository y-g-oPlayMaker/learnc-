#include<iostream>
int main1_10()
{
	int sum = 0, val = 10;
	//ֻҪval��ֵ����0.whileѭ����һֱ���У�
	while (val >= 0) {
		std::cout << "val is " << val << " sum is " << sum<<std::endl;
		sum += val;//sumΪ10--0���֮�ͣ�
		val--;//val��ֵ�Լ���
	}
	return 0;
}