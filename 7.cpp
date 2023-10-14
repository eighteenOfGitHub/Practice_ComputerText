//7.
//编写一个程序，
//求一个自然数中含有多少个2的因子。
//如，6含1个2的因子，8含3个2的因子，11不含2的因子。
//（提示，程序应检查用户输入的合法性）。

#include<iostream>
using namespace std;


int main()
{
	double value;
	while (1)
	{
		cout << "请输入一个自然数：";
		cin >> value;
		if (value < 0 || (value - (int)value) != 0)
		{
			cout << "输入有误，自然数为非负整数，请重新输入" << endl;
			system("pause");
			system("cls");
		}
		else
		{
			break;
		}

	}

	unsigned num = 0;
	while ((int)value%2==0)
	{
		num++;
		value = value / 2;
	}

	if (num == 0)
		cout << "该自然数不放 2 的因子" << endl;
	else
		cout << "该自然数含 " << num << " 个 2 的因子" << endl;

	return 0;
}