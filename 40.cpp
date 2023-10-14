//40.	
//编写出判断一个整数是否为素数的函数，
//并求出在2000以内的有十个以上的所有连续的非素数组。

#include<iostream>
using namespace std;
const int MAX = 2000;

//判断是否为素数
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
	int sum = 0;	//判断数
	
	//遍历查找
	for (int i = 2; i <= MAX; i++)
	{
		//是素数，判断数归零；不是，则自增
		if (!isprime(i))
			sum++;
		else
			sum = 0;

		//输出条件： 
		//	1.判断数大于2（保证连续）
		//	2.该非素数下一个是素数（确定结束输出条件）
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
	cout << "项目一：测试判断素数函数：" << endl << endl;
	cout << "请输入测试数据1：";
	int number1;
	cin >> number1;
	if (isprime(number1))
		cout << number1 << " 是素数" << endl <<endl;
	else
		cout << number1 << " 不是素数" << endl << endl;

	cout << "请输入测试数据2：";
	int number2;
	cin >> number2;
	if (isprime(number2))
		cout << number2 << " 是素数" << endl << endl;
	else
		cout << number2 << " 不是素数" << endl << endl;

	cout << "-------------------------------------" << endl << endl;

	cout << "项目二：输出 " << MAX << " 以内的连续质数数组：" << endl;

	GetContinuousPrime();
}

int main()
{
	run();
	return 0;
}