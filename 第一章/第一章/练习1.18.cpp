#include<iostream>
int main1_18()
{
	//currVal����������ͳ�Ƶ��������ǽ��������ֵ����val;
	int currVal = 0, val = 0;
	//��ȡ��һ��������ȷ��ȷʵ�����ݿ��Դ���
	if (std::cin >> currVal) {
		int cnt = 1;                              //�����������ڴ���ĵ�ǰֵ����
		while (std::cin >> val) {					//��ȡʣ�����
			if (val == currVal)						//���ֵ��ͬ
				++cnt;								//��cnt+1
			else {									//���򣬴�ӡǰһ��ֵ�ĸ���
				std::cout << currVal << " occurs "
					<< cnt << " times " << std::endl;
				currVal = val;						//��ס��ֵ
				cnt = 1;							//���ü�����
			}
		}//whileѭ�����������
		//��ס��ӡ�ļ������һ��ֵ�ĸ���
		std::cout << currVal << " occurs "
			<< cnt << " times " << std::endl;
	}
	return 0;
}