//11.
//��д���򣮼���100֮�ڿ��Ա�13��������Ȼ��֮�͡�

#include<iostream>
using namespace std;

int main()
{
	int num = 0;
	for (int i = 0; i <= 100; i++)
	{
		if (i % 13 == 0)
			num = num + i;
	}
	cout << "100 ֮�ڿ��Ա� 13 ��������Ȼ��֮��Ϊ " << num << endl;




	return 0;
}