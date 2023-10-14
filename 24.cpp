//24.
#include<iostream>
#include<cmath>
using namespace std;
const double MIN = 1e-6;

int fac(int i)
{
	int f;
	if (i == 0)
		f = 1;
	else
		f = i * fac(i - 1);
	return f;    
}

int main()
  {

	double x;
	cin >> x;

	int zhengfu = 1;
	double sum1;
	int sum2;
	double sum = 1;

	double Y = x;

	for (int i = 2 ;abs(sum) >= MIN ; i++)
	{
		zhengfu = (i % 2 == 0) ? -1 : 1;
		sum1 = pow(x, 2 * i - 1);
		sum2 = fac(2 * i - 1);

		sum = zhengfu * sum1 / sum2;
		Y += sum;
	}

	cout << "Y = " << Y << endl;

	return 0;
}