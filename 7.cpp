//7.
//��дһ������
//��һ����Ȼ���к��ж��ٸ�2�����ӡ�
//�磬6��1��2�����ӣ�8��3��2�����ӣ�11����2�����ӡ�
//����ʾ������Ӧ����û�����ĺϷ��ԣ���

#include<iostream>
using namespace std;


int main()
{
	double value;
	while (1)
	{
		cout << "������һ����Ȼ����";
		cin >> value;
		if (value < 0 || (value - (int)value) != 0)
		{
			cout << "����������Ȼ��Ϊ�Ǹ�����������������" << endl;
			system("pause");
			system("cls");
		}
		else
		{
			break;
		}

	}

	unsigned num = 0;
	while ((int)value%2==0)
	{
		num++;
		value = value / 2;
	}

	if (num == 0)
		cout << "����Ȼ������ 2 ������" << endl;
	else
		cout << "����Ȼ���� " << num << " �� 2 ������" << endl;

	return 0;
}