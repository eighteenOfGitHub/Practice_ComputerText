//21.
//����Ȼ������(e)�Ľ���ֵ��e�Ľ���ֵ���㹫ʽΪ��
//������rn < ��ʱֹͣ���㡣��� = 1e-8

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