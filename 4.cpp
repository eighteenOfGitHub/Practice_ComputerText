//4.
//����һλͬѧ�Ŀ��Գɼ���
//����90~100�֣������Excellent����
//80~89�����Very good����
//70~79�����Good���� 
//60~69�����Pass����
//60�����������No Pass����

#include<iostream>
using namespace std;

int main()
{
	double score;

	while (1)
	{
		cin >> score;
		if (score < 0 || score>100)
		{
			cout << "�����������������롣" << endl;
			system("pause");
			system("cls");
		}
		else
			break;
	}

	int option = score / 10;
	switch (option)
	{
	case 10:
	case 9:
	{
		cout << "Excellent" << endl;
		break;
	}
	case 8:
	{
		cout << "Very good" << endl;
		break;
	}
	case 7:
	{
		cout << "Good" << endl;
		break;
	}
	case 6:
	{
		cout << "Pass" << endl;
		break;
	}
	default:
	{
		cout << "No Pass" << endl;
		break;
	}
	}

	return 0;
}