//15.
//求不超过正整数n的2的最大幂值，
//如输入17，程序应输出4（2^4 = 16 < 17）。

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int num = 0;
	int value = pow(2,num);
	while (value <= n)
	{
		num++;
		value = pow(2, num);
	}
	num--;
	cout << "不超过正整数" << n << "的 2 的最大幂值为 " << num << endl;




	return 0;
}