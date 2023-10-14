//49.	编程产生下列数组，并输出
//1 2 3 4 5 6
//2 1 2 3 4 5
//3 2 1 2 3 4
//4 3 2 1 2 3
//5 4 3 2 1 2
//6 5 4 3 2 1

#include<iostream>
#include<cmath>
using namespace std;

void run()
{
	for (int i = 1; i <= 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			cout << abs(i - j) + 1 << " ";
		}
		cout << endl;
	}
}

int main()
{
	run();



	return 0;
}