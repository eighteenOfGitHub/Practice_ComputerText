//39.	编写一个将十进制整数转换为十六进制字符串的函数。
#include<iostream>
#include<string>
#include<cmath>
using namespace std;
const int R = 2;	//在此可以修改基数

string decTohex(int decnumber)
{
	string hexstr;
	//得到倒序的十六进制数
	for (; decnumber > 0; decnumber /= R)
	{
		int remainder = decnumber % R;
		if (remainder >= 0 && remainder <= 9)
		{
			hexstr += char('0' + remainder);
		}
		else
		{
			hexstr += char('A' + remainder - 10);
		}
	}
	//得到十六进制数位数（字符长度）
	int size = hexstr.length();
	
	//倒序换成正序
	char* ptr = new char[size];
	for (int i = 0; i < size; i++)
	{
		*(ptr + i) = hexstr[size - 1 - i];
	}

	//char数组转换为string
	string truehexstr;
	for (int i = 0; i < size; i++)
	{
		truehexstr.push_back(*(ptr + i));
	}

	delete[] ptr;
	return truehexstr;
}

void run()
{
	int decnumber;
	while (1)
	{
		//提示输入十进制数
		cout << "请输入十进制数： ";
		cin >> decnumber;

		//退出死循环
		if (decnumber == 0)
		{
			cout << "其十六进制数为： 0、" << endl << endl << "已退出程序";
			return;
		}

		//得到十六进制数
		string hexstr = decTohex(abs(decnumber));


		if (decnumber < 0)
			cout << "其十六进制数为： -" << hexstr << endl << endl;
		else
			cout << "其十六进制数为： " << hexstr << endl << endl;

	}
}

int main()
{

	run();




	return 0;
}