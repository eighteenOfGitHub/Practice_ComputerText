//29.	
//100ƥ����100������
//����һƥ��3��������һƥ��2����С��2ƥ��1����
//�Ա�̼�����С�С�����Ŀ��

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