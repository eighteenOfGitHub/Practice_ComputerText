//37.
//��дһ���ݹ麯����
//��һ������ת��Ϊ��Ӧ���ַ����������
//����ԭ�Ϳ�����Ϊ��void int2str(int number)��
#include<iostream>
#include<string>
#include<cmath>
using namespace std;

void int2str(int number, string& str)
{
	if(number / 10 != 0)
		int2str(number / 10, str);
	str += char(number % 10 + '0');
	
}

void run()
{
	int number;
	cin >> number;
	string str;
	
	if (number < 0)
		str.append("-");

	int2str(abs(number), str);
	
	cout << str;
}

int main()
{
	run();

	return 0;
}