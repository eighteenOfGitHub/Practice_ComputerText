//33.
//斐波那契（Fibonacci）数列问题：Fibonacci数列递归定义为：
//X0 = 0,
//X1 = 1,
//Xi + 1 = Xi + Xi-1, i = 2, 3, …
//即从第二项开始，数列中的每一个元素等于前面两个元素之和。
//编程输出前20项Fibonacci数。（提示可以用递归或迭代两种方式编程）

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
