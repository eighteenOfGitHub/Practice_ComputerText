//32.	
//����һ����N�ı�׼�ֽ�ʽ������������֮����
//����16 = 2 * 2 * 2 * 2�� 15 = 3 * 5��
#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;
	int i = 2;

	cout << N << " = ";

	while (N != 1)
	{
		if (N % i == 0)
		{
			cout << i;
			if ((N /= i) != 1)
			{
				cout << " * ";
			}
		}
		else
		{
			i++;
		}
	}



	return 0;
}