//6.
//�û�����һ��������������1000��ʾ�����������������
//4  1  13  0  6 - 5  1 - 1   7 - 12  19  0  100
//��д����ͳ���������� - 1��0�� + 1�ĸ�����

#include<iostream>
using namespace std;

int main()
{
	int value;
	cout << "����������������������1000��ʾ���������������" << endl;
	int num1 = 0, num2 = 0, num3 = 0;
	while (1)
	{
		cin >> value;
		if (value == 1000)
			break;
		switch (value)
		{
		case 1:
			num1++;
			break;
		case 0:
			num2++;
			break;
		case -1:
			num3++;
			break;
		default:
			break;
		}
	}
	cout << " 1 �ĸ���Ϊ: " << num1 << endl;
	cout << " 0 �ĸ���Ϊ: " << num2 << endl;
	cout << "-1 �ĸ���Ϊ: " << num3 << endl;
	return 0;
}