//35.	打印如下图形
//A   B   C   D   E
//B   C   D   E   A
//C   D   E   A   B
//D   E   A   B   C
//E   A   B   C   D

#include<iostream>
using namespace std;


int main()
{
	for (char i = 'A'; i <= 'E'; i++)
	{
		for (char j = i; j <= i + 4; j++)
		{
			if (j > 'E')
				cout << char(j - 5) << "\t";
			else
				cout << j << "\t";
		}
		cout << endl;
		cout << endl;
	}




	return 0;
}