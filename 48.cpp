//48.	编程产生下列数组，并输出。
//1 2 3 4 5 6
//2 3 4 5 6 0
//3 4 5 6 0 1
//4 5 6 0 1 2
//5 6 0 1 2 3
//6 0 1 2 3 4

#include<iostream>
using namespace std;

void run()
{
	for (int i = 0; i < 6; i++)
	{
		for (int j = 1; j <= 6; j++)
		{
			cout << (j + i) % 7 << " ";
		}
		cout << endl;
	}
}

int main()
{
	run();



	return 0;
}