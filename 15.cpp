//15.
//�󲻳���������n��2�������ֵ��
//������17������Ӧ���4��2^4 = 16 < 17����

#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cin >> n;
	int num = 0;
	int value = pow(2,num);
	while (value <= n)
	{
		num++;
		value = pow(2, num);
	}
	num--;
	cout << "������������" << n << "�� 2 �������ֵΪ " << num << endl;




	return 0;
}