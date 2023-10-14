//25.	编制一个程序，读入一个正整数，并反向输出。例如，读入123，输出是321。
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
	int mun;
	cout << "请输入所需要转换的整数： ";
	cin >> mun;

	int obj = 0;
	int i = 1;
	for (; mun > 0; i++)
	{
		obj = obj * 10 + (mun % 10);
		mun /= 10;
	}

	cout << "结果为 ： " << obj << endl;
	


	return 0;
}