//1.
//������������������ı����м��ܽ��������
//�û�����һ���ı����ַ���, �費����20���ַ�����
//Ȼ��������Ϊ��Կ���ַ���
//����������ܼ����ܵ��ַ�����

#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;

//����
void Encryption()
{
	char in[20];
	cout << "��������Ҫ���ܵ��ַ�����С��20���ַ����� ";
	cin >> in;
	
	assert(strlen(in) <= 20 && "�ַ�����С��С��20���ַ�");

	char out[20]{};
	for (int i = 0; i < strlen(in); i++)
	{
		out[i] = in[i] ^ 15;//00001111
	}
	
	cout << "���ܺ�����Ϊ�� " ;
	for (int i = 0; i < strlen(out); i++)
	{
		cout << out[i];
	}
	cout << endl;
}

void Decryption()
{
	char in[20];
	cout << "��������Ҫ���ܵ��ַ�����С��20���ַ����� ";
	cin >> in;
	
	assert(strlen(in) <= 20 && "�ַ�����С��С��20���ַ�");

	char out[20]{};
	for (int i = 0; i < strlen(in); i++)
	{
		out[i] = in[i] ^ 15;// 00001111
	}

	cout << "���ܺ�ԭ��Ϊ�� ";
	for (int i = 0; i < strlen(out); i++)
	{
		cout << out[i];
	}
	cout << endl;
}

void text()
{
	char a[20];
	cin >> a;
	cout << strlen(a);
}

int main()
{

	//text();

	while (1)
	{
		cout << "��ӭʹ�ü��ܽ��ܳ���" << endl;
		cout << "1.����" << endl;
		cout << "2.����" << endl;
		cout << "0.�˳�����" << endl;
		cout << "��ѡ����Ҫִ�еĹ��ܣ�";
		int a;
		cin >> a;
		switch (a)
		{
		
		case 1:{Encryption();break;}
		
		case 2:{Decryption();break;}
		
		case 0:{return 0;break;}
		
		default:
		{
			cout << "����ѡ����������롣" << endl;
			break;
		}
		}
		cout << "------------------------------------" << endl;



	}






	return 0;
}