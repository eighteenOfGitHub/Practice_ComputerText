//19.	
//��һ����ģ�������ӡ������ˡ����������㡣
//�����ڼ���������5 + 6�󣬳������ = 11��
//�����ڼ���������11 * 7�󣬳������ = 77

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
			cout << "��������Ϊ 0 ��" << endl;
		else
			cout << " = " << a / b << endl;
		break;
	default:
		cout << "���������δ¼����������" << endl;
		break;
	}
	return 0;
}