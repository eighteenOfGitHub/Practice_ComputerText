//16.
//�й�ר��ʮ�ֹ�ע�齭��ҵ��Դ�����⡣
//Ŀǰ�齭�д�Լ��8000�����㣬ƽ��ÿ����3.5 % ���ٶȼ��١�
//���дһ������
//�����ڶ�����֮�������Ŀ�½���Ŀǰ��һ�룿
//��������½���Ŀǰ��ʮ��֮һ������ʾע���������͵�ȡֵ��Χ����
#include<iostream>
using namespace std;
const double speed = 1 - 3.5 / 100;

int main()
{
	double prenum = 8000;
	double num = prenum * speed;
	int i = 1;
	
	for (; num > prenum / 2; i++)	//һ��
	{
		num *= speed;
	}
	cout << i << " ��֮�������Ŀ�½���Ŀǰ��һ��" << endl;

	for (; num > prenum / 10; i++)	//ʮ��֮һ
	{
		num *= speed;
	}
	cout << i << " ��֮�������Ŀ�½���Ŀǰ��ʮ��֮һ" << endl;

	return 0;
}