//20.	
//��һ��1Ԫ��Ʊ����1�֡�2�ֺ�5�ֵ�Ӳ�ң�
//ÿ��������1ö�����ж����ֻ�����
#include<iostream>
using namespace std;
const int all = 100;
int main()
{
	int num = 0;
	int num1 = 1 , num2 = 1 , num3 = 1;
	for (; num3 <= 100 / 5; num3++)
	{
		for (; num2 <= (100 - num3 * 5) / 2; num2++)
		{
			num++;
		}
	}
	cout << "�ܼ� " << num++ << " �ֻ�����" << endl;


	return 0;
}