//2.	
//�û�������ݼ��·��������ݣ�����������·ݵ�������
//��ʾ����2��Ҫ�����Ƿ����꣬
//�������Ҫô�ܱ�4�����Ҳ��ܱ�100������Ҫô�ܱ�400������
//����֮�ⶼ��������

#include<iostream>
using namespace std;


int getday(int year, int month)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		return 31;
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		return 30;
	}
	case 2:
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			return 29;
		else
			return 28;
	}

	default:

		break;
	}



}

int main()
{
	int year, month;
	while (1)
	{
		cout << "��������ݣ� ";
		cin >> year;
		cout << endl;

		cout << "�������·ݣ� ";
		cin >> month;
		cout << endl;

		if (year >= 0 && month <= 12 && month >= 1)
			break;
		else
			cout << "������������������" << endl;

	}

	int day = getday(year, month);
	cout << year << " �� " << month << " ���� " << day << " ��" << endl;

	return 0;
}