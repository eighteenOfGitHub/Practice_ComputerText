//27.
//��һ�����ĵȲ����У���������������������
//ͷ4�����ĺ�ֵΪ26����ֵΪ880��
//����ʾ�������й���Ϊ���������������н����ָ�����
//�����е��������С��5�����乫��ҲС��5������ͷ�������ĺͽ�����26����
//an = a1 + (n - 1) * d;
//Sn = n * a1 + n * (n - 1) * d / 2;

#include<iostream>
#include<cmath>
using namespace std;


int main()
{
	int d = 1;
	int a1 = 0;
	int a2, a3, a4;
	
	for (; a1 < 5; a1++)
	{
		for (; d < 5; d++)
		{
			a2 = a1 + (2 - 1) * d;
			a3 = a1 + (3 - 1) * d;
			a4 = a1 + (4 - 1) * d;

			if (a1 + a2 + a3 + a4 == 26 && a1 * a2 * a3 * a4 == 880)
			{
				cout << "a1 = " << a1 << endl;
				cout << "d = " << d << endl;
				if(a1 - d > 0)
					cout << "an =  " << d << "n + " << a1 - d << endl;
				else if(a1 - d == 0)
					cout << "an =  " << d << "n" << endl;
				else
					cout << "an =  " << d << "n - " << abs(a1 - d) << endl;
				cout << endl;
			}
		}
		d = 1;
	}

	return 0;
}