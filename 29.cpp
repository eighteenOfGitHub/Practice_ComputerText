//29.	
//100匹马驮100担货，
//大马一匹驮3担，中马一匹驮2担，小马2匹驮1担。
//试编程计算大、中、小马的数目。

#include<iostream>
using namespace std;

int main()
{
	int big,middle,small;
	for (big = 0; big <= int(100 / 3);big++)
	{
		for (middle = 0; middle <= (100 - 3 * big) / 2; middle++)
		{
			small = 100 - big - middle;
			if (small % 2 == 0 && small / 2 + middle * 2 + big * 3 == 100)
			{
				cout << "The numbers of big horses is: " << big << endl;
				cout << "The numbers of middle horses is: " << middle << endl;
				cout << "The numbers of small horses is: " << small << endl;
				cout << endl;
			}
				
		}
	}

	return 0;
}