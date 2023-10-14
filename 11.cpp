//11.
//编写程序．计算100之内可以被13整除的自然数之和。

#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (i % 13 == 0)
			num = num + i;
	}
	cout << "100 之内可以被 13 整除的自然数之和为 " << num << endl;




	return 0;
}