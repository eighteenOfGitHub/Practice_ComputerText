//26.	
//ˮ�ɻ������⣺
//ˮ�ɻ�����һ����λ��������ֵ����ÿ�����ֵ������͡�
//���磬153 = 1^3 + 5^3 + 3^3��������С��999��ˮ�ɻ�����

#include<iostream>
using namespace std;

int main()
{
	for (int i = 100; i <= 999; i++)
	{
		int a = i % 10;
		int b = i % 100 / 10;
		int c = i / 100;

		if (i == a * a * a + b * b * b + c * c * c)
		{
			cout << i << endl;
		}

	}


	return 0;
}