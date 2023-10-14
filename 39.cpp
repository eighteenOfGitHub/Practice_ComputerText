//39.	��дһ����ʮ��������ת��Ϊʮ�������ַ����ĺ�����
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
const int R = 2;	//�ڴ˿����޸Ļ���

string decTohex(int decnumber)
{
	string hexstr;
	//�õ������ʮ��������
	for (; decnumber > 0; decnumber /= R)
	{
		int remainder = decnumber % R;
		if (remainder >= 0 && remainder <= 9)
		{
			hexstr += char('0' + remainder);
		}
		else
		{
			hexstr += char('A' + remainder - 10);
		}
	}
	//�õ�ʮ��������λ�����ַ����ȣ�
	int size = hexstr.length();
	
	//���򻻳�����
	char* ptr = new char[size];
	for (int i = 0; i < size; i++)
	{
		*(ptr + i) = hexstr[size - 1 - i];
	}

	//char����ת��Ϊstring
	string truehexstr;
	for (int i = 0; i < size; i++)
	{
		truehexstr.push_back(*(ptr + i));
	}

	delete[] ptr;
	return truehexstr;
}

void run()
{
	int decnumber;
	while (1)
	{
		//��ʾ����ʮ������
		cout << "������ʮ�������� ";
		cin >> decnumber;

		//�˳���ѭ��
		if (decnumber == 0)
		{
			cout << "��ʮ��������Ϊ�� 0��" << endl << endl << "���˳�����";
			return;
		}

		//�õ�ʮ��������
		string hexstr = decTohex(abs(decnumber));


		if (decnumber < 0)
			cout << "��ʮ��������Ϊ�� -" << hexstr << endl << endl;
		else
			cout << "��ʮ��������Ϊ�� " << hexstr << endl << endl;

	}
}

int main()
{

	run();




	return 0;
}