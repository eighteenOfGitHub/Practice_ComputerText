//36.
//正读和反读都一样的数称为回文数。
//编写程序输入一个整数max_num，
//输出从0到max_num中用二进制表示和十进制表示都是回文数的整数。
//定义一个函数is_circle_num()判断一个数（number）在某个进制（radius）下是否为回文数。
//例如，整数313就是该程序输出的一个数，因为它的二进制表示为10011001。
#include<iostream>
#include<cmath>
using namespace std;

//判断位数
int getbit(int i)
{
	int num = 0;
	for (; i != 0; num++)
	{
		i = i / 10;
	}
	return num;
}

//判断是否为回文数
bool IsPalindromic(int i)
{
	int bit = getbit(i);
	for (int j = 0; j < bit / 2; j++)
	{
		if (int(i / pow(10, bit - j -1)) % 10 != int(i / pow(10, j)) % 10)
			return false;
	}
	return true;
}

//得到的二进制数
int getbinary(int i)
{ 
	int binary = 0;
	
	for(int j = 0;i != 0;j++)  
	{
		binary += ((i % 2 == 0) ? 0 : 1) * pow(10, j);
		if (i == 1)
		{
			i = 0;
		}
		else
			i = (i % 2 == 0) ? i / 2 : (i - 1) / 2;
	}

		return binary;  
}

//判断十进制和二进制都是回文数
void IsDoublePalindromic()
{
	int max_num;
	cin >> max_num;

	for (int j = 0, i = 10; i <= max_num; i++)
	{
		if (IsPalindromic(i) && IsPalindromic(getbinary(i)))
		{
			cout << i << ", ";
			j++;
		}
		while (j == 10)
		{
			cout << endl;
			j = 0;
		}
	}
}

void text()
{
	cout << getbit(10101) << endl;

	cout << IsPalindromic(1011) << endl;

	cout << getbinary(99) << endl;

}

int main()
{
	//text();

	IsDoublePalindromic();

	return 0;
}