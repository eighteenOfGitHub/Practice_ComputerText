//31.	
//������1000���ڵ����з�����������������
//���λ����С�ڵ�λ���֡�
//��12��238�ȡ���21��548������������
#include<iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 1000; i++)
	{
		int a = i % 10;
		int b = i % 100 / 10;
		int c = i / 100;

		if (a > b && b > c)
		{
			cout << i << endl;
		}
	}


	return 0;
}