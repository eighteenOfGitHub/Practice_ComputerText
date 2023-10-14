//19.	
//编一程序模拟整数加、减、乘、除四则运算。
//当你在键盘上输入5 + 6后，程序将输出 = 11，
//当你在键盘上输入11 * 7后，程序将输出 = 77

#include<iostream>
using namespace std;

int main()
{
	int a, b;
	char charater;
	cin >> a >> charater >> b;
	switch (charater)
	{
	case '+':
		cout << " = " << a + b << endl;
		break;
	case '-':
		cout << " = " << a - b << endl;
		break;
	case '*':
		cout << " = " << a * b << endl;
		break;
	case '/':
		if (b == 0)
			cout << "除数不能为 0 ！" << endl;
		else
			cout << " = " << a / b << endl;
		break;
	default:
		cout << "本计算机暂未录入该运算符！" << endl;
		break;
	}
	return 0;
}