//30.	编程产生出1到10以内的所有数对<i, j>并输出, 其中i > j。
#include<iostream>
using namespace std;

int main()
{
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; i > j; j++)
		{
			cout << "< " << i << " , " << j << " >" << endl;
		}
	}

	return 0; 
}