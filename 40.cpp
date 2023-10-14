//40.	
//��д���ж�һ�������Ƿ�Ϊ�����ĺ�����
//�������2000���ڵ���ʮ�����ϵ����������ķ������顣

#include<iostream>
using namespace std;
const int MAX = 2000;

//�ж��Ƿ�Ϊ����
bool isprime(int number)
{
	if (number % 2 == 0)
		return false;
	else
	{
		for (int i = 3; i < number; i += 2)
			if (number % i == 0)
				return false;
		return true;
	}
}

void GetContinuousPrime()
{
	int sum = 0;	//�ж���
	
	//��������
	for (int i = 2; i <= MAX; i++)
	{
		//���������ж������㣻���ǣ�������
		if (!isprime(i))
			sum++;
		else
			sum = 0;

		//��������� 
		//	1.�ж�������2����֤������
		//	2.�÷�������һ����������ȷ���������������
		if (sum > 1 && isprime(i + 1))
		{
			for (; sum != 0; sum--)
				cout << i - sum + 1 << " ";
			cout << endl;
		}
	}
}

void run()
{
	cout << "��Ŀһ�������ж�����������" << endl << endl;
	cout << "�������������1��";
	int number1;
	cin >> number1;
	if (isprime(number1))
		cout << number1 << " ������" << endl <<endl;
	else
		cout << number1 << " ��������" << endl << endl;

	cout << "�������������2��";
	int number2;
	cin >> number2;
	if (isprime(number2))
		cout << number2 << " ������" << endl << endl;
	else
		cout << number2 << " ��������" << endl << endl;

	cout << "-------------------------------------" << endl << endl;

	cout << "��Ŀ������� " << MAX << " ���ڵ������������飺" << endl;

	GetContinuousPrime();
}

int main()
{
	run();
	return 0;
}