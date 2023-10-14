//21.
//求自然对数底(e)的近似值。e的近似值计算公式为：
//当余项rn < ε时停止计算。设ε = 1e-8

#include<iostream>
#include<iomanip>
using namespace std;
const double MIN = 1e-8;

int fac(int i)
{
	int f;
	if (i == 0)
		f = 1;
	else
	{
		f = fac(i - 1) * i;
	}
	return f;
}

int main()
{
	double e = 1,item = 1;
	
	
	for (int i = 1; item >= MIN; i++)
	{
		item = 1.0 / fac(i);
		e += item;
	}

	cout << "e = " << setprecision(9) << e << endl;

	//setprecision setprecision setprecision setprecision setprecision

	return 0;
}