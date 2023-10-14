//2.	
//用户输入年份及月份两个数据，程序输出该月份的天数。
//提示：对2月要考虑是否闰年，
//闰年年份要么能被4整除且不能被100整除，要么能被400整除，
//除次之外都不是闰年

#include<iostream>
using namespace std;


int getday(int year, int month)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
	{
		return 31;
		break;
	}
	case 4:
	case 6:
	case 9:
	case 11:
	{
		return 30;
	}
	case 2:
	{
		if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
			return 29;
		else
			return 28;
	}

	default:

		break;
	}



}

int main()
{
	int year, month;
	while (1)
	{
		cout << "请输入年份： ";
		cin >> year;
		cout << endl;

		cout << "请输入月份： ";
		cin >> month;
		cout << endl;

		if (year >= 0 && month <= 12 && month >= 1)
			break;
		else
			cout << "输入有误，请重新输入" << endl;

	}

	int day = getday(year, month);
	cout << year << " 年 " << month << " 月有 " << day << " 天" << endl;

	return 0;
}