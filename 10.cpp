//10.
//编程实现解决下述问题的算法：
//一位顾客在购物时，
//如果买4个苹果剩下4角钱．如果买5个苹果则缺5角钱，
//请问，该顾客带了多少钱？多少钱可以买一个苹果？

#include<iostream>
using namespace std;



int main()
{
	int money, price;
	for (money = 1; money <= 100; money++)
	{
		for (price = 1; price <= money; price++)
		{
			if(money - price * 4 == 4 && money + 5 == price * 5)
			{
				cout << "共带了 " << money << " 角钱\n苹果单价为 " << price << " 角" << endl;
				return 0;
			}
		}
	}




	return 0;
}