//20.	
//把一张1元钞票换成1分、2分和5分的硬币，
//每种至少有1枚，问有多少种换法？
#include<iostream>
using namespace std;
const int all = 100;
int main()
{
	int num = 0;
	int num1 = 1 , num2 = 1 , num3 = 1;
	for (; num3 <= 100 / 5; num3++)
	{
		for (; num2 <= (100 - num3 * 5) / 2; num2++)
		{
			num++;
		}
	}
	cout << "总计 " << num++ << " 种换法。" << endl;


	return 0;
}