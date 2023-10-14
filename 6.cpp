//6.
//用户输入一个整数流（输入1000表示数据输入结束），如
//4  1  13  0  6 - 5  1 - 1   7 - 12  19  0  100
//编写程序统计输入流中 - 1、0和 + 1的个数。

#include<iostream>
using namespace std;

int main()
{
	int value;
	cout << "请输入您的整数流（输入1000表示数据输入结束）：" << endl;
	int num1 = 0, num2 = 0, num3 = 0;
	while (1)
	{
		cin >> value;
		if (value == 1000)
			break;
		switch (value)
		{
		case 1:
			num1++;
			break;
		case 0:
			num2++;
			break;
		case -1:
			num3++;
			break;
		default:
			break;
		}
	}
	cout << " 1 的个数为: " << num1 << endl;
	cout << " 0 的个数为: " << num2 << endl;
	cout << "-1 的个数为: " << num3 << endl;
	return 0;
}