//33.
//쳲�������Fibonacci���������⣺Fibonacci���еݹ鶨��Ϊ��
//X0 = 0,
//X1 = 1,
//Xi + 1 = Xi + Xi-1, i = 2, 3, ��
//���ӵڶ��ʼ�������е�ÿһ��Ԫ�ص���ǰ������Ԫ��֮�͡�
//������ǰ20��Fibonacci��������ʾ�����õݹ��������ַ�ʽ��̣�

#include<iostream>
using namespace std;

int getFibonacci(int i, int Fibonacci[])
{
	return Fibonacci[i - 1] + Fibonacci[i - 2];
}

int main()
{
	int Fibonacci[20];
	Fibonacci[0] = 0;
	Fibonacci[1] = 1;

	for (int i = 2; i < 20; i++)
	{
		Fibonacci[i] = getFibonacci(i, Fibonacci);
	}
	for (int i = 1; i < 20; i++)
	{
		cout << Fibonacci[i] << " ";
	}


	return 0;
}
