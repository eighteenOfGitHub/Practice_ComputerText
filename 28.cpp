//28.	
//完数问题：若有一数，其值等于它的因子之和，则该数称为完数。
//例如，6的因子为1、2、3，而6 = 1 + 2 + 3，故6是完数。
//编程输出1000之内的所有完数及其因子。

#include<iostream>
using namespace std;

//判断是否为完数
bool isperfect(int n)
{
	int sum = 0;

	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	
	if (sum == n)
		return true;
	else
		return false;
}

void show_factor_array(int n)
{
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			cout << i << ",";
		}
	}
	cout << endl;
}

int main()
{
	for (int i = 2; i <= 1000; i++)
	{
		//1.判断是不是完数
		if (isperfect(i))
		{
			//2.如果是完数，输出完数
			cout << i << " : ";
			//找到完数，并输出因子数组
			show_factor_array(i);
		}
	}
	return 0;
}