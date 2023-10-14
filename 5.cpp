//5.
//旅行社的订票量小于10张时，航空公司给予10 % 的折扣；
//订票量大于或等于10张且小于20张时，航空公司给予15 % 的折扣；
//订票量大于或等于20张且小于30张时，航空公司给予30 % 的折扣；
//订票量大于或等于30张时，航空公司给予最高的45 % 的折扣。
//编程输入订票张数及单张机票票价，程序输出折扣率及应付款额。

#include<iostream>
using namespace std;

int main()
{
	int num, price;
	cout << "请输入订票张数：";
	cin >> num;
	cout << "请输入单张机票票价：";
	cin >> price;
	if (num < 10)
		cout << "航空公司给予 10% 的折扣，总售价为 " << price * num * 0.9 << endl;
	else if(num >= 10 && num < 20)
		cout << "航空公司给予 15% 的折扣，总售价为 " << price * num * 0.85 << endl;
	else if(num >= 20 && num < 30)
		cout << "航空公司给予 30% 的折扣，总售价为 " << price * num * 0.7 << endl;
	else
		cout << "航空公司给予 40% 的折扣，总售价为 " << price * num * 0.55 << endl;

	return 0;
}