//26.	
//水仙花数问题：
//水仙花数是一种三位数，它的值等于每个数字的立方和。
//例如，153 = 1^3 + 5^3 + 3^3。编程输出小于999的水仙花数。

#include<iostream>
using namespace std;

int main()
{
	for (int i = 100; i <= 999; i++)
	{
		int a = i % 10;
		int b = i % 100 / 10;
		int c = i / 100;

		if (i == a * a * a + b * b * b + c * c * c)
		{
			cout << i << endl;
		}

	}


	return 0;
}