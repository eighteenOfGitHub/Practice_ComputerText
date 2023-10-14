//50.	编程产生下列数组，并输出。
//1	2	3 ...	n-1	0
//2	3	4 ...	0	1
//3	4	5 ...	1   2
//.........................
//n-1 0	1 ...	n-3	n - 2
//0	1	2 ...	n-2	n - 1

#include<iostream>
using namespace std;

void run()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			cout << (j + i - 1) % n << " ";
		}
		cout << endl;
	}



}

int main()
{
	run();
	return 0;
}