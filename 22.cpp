//22.
//£Ó£½£±£¡£«£²£¡£«¡­£«£·£¡

#include<iostream>
using namespace std;

int fac(int i)
{
	int f;
	if (i == 0)
	{
		f = 1;
	}
	else
	{
		f = i * fac(i - 1);
	}
	return f;
}

int main()
{
	int sum = 0;
	for (int i = 1; i <= 7; i++)
	{
		sum += fac(i);
	}
	cout << "S = " << sum << endl;

	return 0;
}