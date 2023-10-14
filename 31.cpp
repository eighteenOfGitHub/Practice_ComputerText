//31.	
//编程求出1000以内的所有符合如下条件的数：
//其高位数字小于低位数字。
//如12，238等。但21，548不符合条件。
#include<iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 1000; i++)
	{
		int a = i % 10;
		int b = i % 100 / 10;
		int c = i / 100;

		if (a > b && b > c)
		{
			cout << i << endl;
		}
	}


	return 0;
}