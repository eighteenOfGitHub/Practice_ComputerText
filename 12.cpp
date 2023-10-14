//12.	
//键盘输入m和n（10 < m < n≤32000），
//求出m~n间所有素数且按每行8个数形式输出。

#include<iostream>
using namespace std;

bool isprime(int m)
{
	if (m % 2 == 0)
		return 0;
	for (int i = 3; i < m; i = i + 2)
	{
		if (m % i == 0)
			return 0;
	}
	return 1;
}

int main()
{
	int m, n;
	while(1)
	{
		cout << "请输入查找素数范围的上限n和下限m（10 < m < n ≤ 32000）：";
		cin >> m >> n;
		if (m <= 10 || n > 32000 || m >= n)			//检查
		{
			cout << "输入有误，请重新输入！" << endl;
			system("pause");
			system("cls");
		}
		else
			break;
	}
	for (int  i = 0; m <= n; m++)
	{
		if (isprime(m))								//输出质数
		{
			cout << m << "\t";
			i++;
		}

		if (i == 8)									//换行
		{
			i = 0;
			cout << endl;
		}
	}

	return 0;
}