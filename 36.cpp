//36.
//�����ͷ�����һ��������Ϊ��������
//��д��������һ������max_num��
//�����0��max_num���ö����Ʊ�ʾ��ʮ���Ʊ�ʾ���ǻ�������������
//����һ������is_circle_num()�ж�һ������number����ĳ�����ƣ�radius�����Ƿ�Ϊ��������
//���磬����313���Ǹó��������һ��������Ϊ���Ķ����Ʊ�ʾΪ10011001��
#include<iostream>
#include<cmath>
using namespace std;

//�ж�λ��
int getbit(int i)
{
	int num = 0;
	for (; i != 0; num++)
	{
		i = i / 10;
	}
	return num;
}

//�ж��Ƿ�Ϊ������
bool IsPalindromic(int i)
{
	int bit = getbit(i);
	for (int j = 0; j < bit / 2; j++)
	{
		if (int(i / pow(10, bit - j -1)) % 10 != int(i / pow(10, j)) % 10)
			return false;
	}
	return true;
}

//�õ��Ķ�������
int getbinary(int i)
{ 
	int binary = 0;
	
	for(int j = 0;i != 0;j++)  
	{
		binary += ((i % 2 == 0) ? 0 : 1) * pow(10, j);
		if (i == 1)
		{
			i = 0;
		}
		else
			i = (i % 2 == 0) ? i / 2 : (i - 1) / 2;
	}

		return binary;  
}

//�ж�ʮ���ƺͶ����ƶ��ǻ�����
void IsDoublePalindromic()
{
	int max_num;
	cin >> max_num;

	for (int j = 0, i = 10; i <= max_num; i++)
	{
		if (IsPalindromic(i) && IsPalindromic(getbinary(i)))
		{
			cout << i << ", ";
			j++;
		}
		while (j == 10)
		{
			cout << endl;
			j = 0;
		}
	}
}

void text()
{
	cout << getbit(10101) << endl;

	cout << IsPalindromic(1011) << endl;

	cout << getbinary(99) << endl;

}

int main()
{
	//text();

	IsDoublePalindromic();

	return 0;
}