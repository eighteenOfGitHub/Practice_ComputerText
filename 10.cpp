//10.
//���ʵ�ֽ������������㷨��
//һλ�˿��ڹ���ʱ��
//�����4��ƻ��ʣ��4��Ǯ�������5��ƻ����ȱ5��Ǯ��
//���ʣ��ù˿ʹ��˶���Ǯ������Ǯ������һ��ƻ����

#include<iostream>
using namespace std;



int main()
{
	int money, price;
	for (money = 1; money <= 100; money++)
	{
		for (price = 1; price <= money; price++)
		{
			if(money - price * 4 == 4 && money + 5 == price * 5)
			{
				cout << "������ " << money << " ��Ǯ\nƻ������Ϊ " << price << " ��" << endl;
				return 0;
			}
		}
	}




	return 0;
}