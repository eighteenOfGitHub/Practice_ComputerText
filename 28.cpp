//28.	
//�������⣺����һ������ֵ������������֮�ͣ��������Ϊ������
//���磬6������Ϊ1��2��3����6 = 1 + 2 + 3����6��������
//������1000֮�ڵ����������������ӡ�

#include<iostream>
using namespace std;

//�ж��Ƿ�Ϊ����
bool isperfect(int n)
{
	int sum = 0;

	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			sum += i;
		}
	}
	
	if (sum == n)
		return true;
	else
		return false;
}

void show_factor_array(int n)
{
	for (int i = 1; i < n; i++)
	{
		if (n % i == 0)
		{
			cout << i << ",";
		}
	}
	cout << endl;
}

int main()
{
	for (int i = 2; i <= 1000; i++)
	{
		//1.�ж��ǲ�������
		if (isperfect(i))
		{
			//2.������������������
			cout << i << " : ";
			//�ҵ��������������������
			show_factor_array(i);
		}
	}
	return 0;
}