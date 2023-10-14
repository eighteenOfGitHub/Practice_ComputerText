//27.
//求一整数的等差数列，该数列满足下述条件：
//头4项数的和值为26，积值为880。
//（提示：该数列公差为正整数，否则数列将出现负数；
//该数列的首项必须小于5，且其公差也小于5，否则头四项数的和将大于26。）
//an = a1 + (n - 1) * d;
//Sn = n * a1 + n * (n - 1) * d / 2;

#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int d = 1;
	int a1 = 0;
	int a2, a3, a4;
	
	for (; a1 < 5; a1++)
	{
		for (; d < 5; d++)
		{
			a2 = a1 + (2 - 1) * d;
			a3 = a1 + (3 - 1) * d;
			a4 = a1 + (4 - 1) * d;

			if (a1 + a2 + a3 + a4 == 26 && a1 * a2 * a3 * a4 == 880)
			{
				cout << "a1 = " << a1 << endl;
				cout << "d = " << d << endl;
				if(a1 - d > 0)
					cout << "an =  " << d << "n + " << a1 - d << endl;
				else if(a1 - d == 0)
					cout << "an =  " << d << "n" << endl;
				else
					cout << "an =  " << d << "n - " << abs(a1 - d) << endl;
				cout << endl;
			}
		}
		d = 1;
	}

	return 0;
}