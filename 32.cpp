//32.	
//求任一整数N的标准分解式，即素数因子之积。
//例如16 = 2 * 2 * 2 * 2， 15 = 3 * 5。
#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int i = 2;

	cout << N << " = ";

	while (N != 1)
	{
		if (N % i == 0)
		{
			cout << i;
			if ((N /= i) != 1)
			{
				cout << " * ";
			}
		}
		else
		{
			i++;
		}
	}



	return 0;
}