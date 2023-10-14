//16.
//有关专家十分关注珠江渔业资源的问题。
//目前珠江中大约有8000万条鱼，平均每年以3.5 % 的速度减少。
//请编写一个程序，
//计算在多少年之后鱼的数目下降到目前的一半？
//多少年后下降到目前的十分之一？（提示注意整数类型的取值范围）。
#include<iostream>
using namespace std;
const double speed = 1 - 3.5 / 100;

int main()
{
	double prenum = 8000;
	double num = prenum * speed;
	int i = 1;
	
	for (; num > prenum / 2; i++)	//一半
	{
		num *= speed;
	}
	cout << i << " 年之后鱼的数目下降到目前的一半" << endl;

	for (; num > prenum / 10; i++)	//十分之一
	{
		num *= speed;
	}
	cout << i << " 年之后鱼的数目下降到目前的十分之一" << endl;

	return 0;
}