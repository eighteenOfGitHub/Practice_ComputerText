//30.	��̲�����1��10���ڵ���������<i, j>�����, ����i > j��
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