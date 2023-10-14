//34.	打印下面图形。
//						1
//					1   3   1
//				1   3   5   3   1
//			1   3   5   7   5   3   1
//		1   3   5   7   9   7   5   3   1
//		…    …     …    …     …    …    …
//1   3      …     …    21    …    …    …    3  1

#include<iostream>
using namespace std;
const int MAX = 6;

int main()
{
	for (int i = 1; i <= MAX; i++)
	{
		for (int j = 1; j <= MAX - i; j++)
		{
			cout << "\t";
		}
		for (int j = 1; j <= i; j++)
		{
			cout << 2 * j - 1 << "\t";
		}
		for (int j = i - 1; j >= 1; j--)
		{
			cout << 2 * j - 1 << "\t";
		}
		cout << endl;
	}



	return 0;
}
