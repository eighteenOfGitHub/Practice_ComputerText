//38.
//�ú���ʵ�ֽ�һ�����ַ�����ʽ��ʾ��ʮ��������ת��Ϊһ��ʮ����������
//���磬���롱A2��ת��Ϊ162��
#include<iostream>
#include<string>
using namespace std;

int hexTodec(string str)
{
	int decnumber = 0;
	for (int i = 0; i < str.length(); i++)
	{
		if (str[i] >= 'A' && str[i] < 'Z')
		{
			decnumber = decnumber * 16 + str[i] + 10 - 'A';
		}
		else if (str[i] >= 'a' && str[i] < 'z')
		{
			decnumber = decnumber * 16 + str[i] + 10 - 'a';
		}
		else if (str[i] >= '0' && str[i] < '9')
		{
			decnumber = decnumber * 16 + str[i] - '0';
		}
		
	}
	return decnumber;
}



void text()
{
	//string str;
//cin >> str;
//int bit = str.length();
//cout << bit;

//cout << int('0');//48
//cout << int('A');//65
}

void run()
{
	string hexstr;
	cin >> hexstr;
	int decnumber= hexTodec(hexstr);
	cout << decnumber;

}

int main()
{
	run();




	return 0;
}