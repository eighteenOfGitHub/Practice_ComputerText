//12.	
//��������m��n��10 < m < n��32000����
//���m~n�����������Ұ�ÿ��8������ʽ�����

#include<iostream>
using namespace std;

bool isprime(int m)
{
	if (m % 2 == 0)
		return 0;
	for (int i = 3; i < m; i = i + 2)
	{
		if (m % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int m, n;
	while(1)
	{
		cout << "���������������Χ������n������m��10 < m < n �� 32000����";
		cin >> m >> n;
		if (m <= 10 || n > 32000 || m >= n)			//���
		{
			cout << "�����������������룡" << endl;
			system("pause");
			system("cls");
		}
		else
			break;
	}
	for (int  i = 0; m <= n; m++)
	{
		if (isprime(m))								//�������
		{
			cout << m << "\t";
			i++;
		}

		if (i == 8)									//����
		{
			i = 0;
			cout << endl;
		}
	}

	return 0;
}