//9.
//公鸡5元1只，母鸡3元1只，小鸡1元3只，
//花了100元钱买100只鸡，
//问公鸡、母鸡、小鸡各多少只？

#include<iostream>
using namespace std;

int main()
{
	int cock, hen, chick;
	for (cock = 0; cock <= 100 / 5; cock++)
	{
		for (hen = 0; hen <= 100 / 3; hen++)
		{
			chick = 100 - hen - cock;
			if ((chick % 3 == 0) && (cock *5 + hen * 3 + chick  / 3 == 100))
			{
				cout << "cock = " << cock << endl;
				cout << "hen = " << hen << endl;
				cout << "chick = " << chick << endl;
			}
		}
	}


	return 0;
 }