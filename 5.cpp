//5.
//������Ķ�Ʊ��С��10��ʱ�����չ�˾����10 % ���ۿۣ�
//��Ʊ�����ڻ����10����С��20��ʱ�����չ�˾����15 % ���ۿۣ�
//��Ʊ�����ڻ����20����С��30��ʱ�����չ�˾����30 % ���ۿۣ�
//��Ʊ�����ڻ����30��ʱ�����չ�˾������ߵ�45 % ���ۿۡ�
//������붩Ʊ���������Ż�ƱƱ�ۣ���������ۿ��ʼ�Ӧ����

#include<iostream>
using namespace std;

int main()
{
	int num, price;
	cout << "�����붩Ʊ������";
	cin >> num;
	cout << "�����뵥�Ż�ƱƱ�ۣ�";
	cin >> price;
	if (num < 10)
		cout << "���չ�˾���� 10% ���ۿۣ����ۼ�Ϊ " << price * num * 0.9 << endl;
	else if(num >= 10 && num < 20)
		cout << "���չ�˾���� 15% ���ۿۣ����ۼ�Ϊ " << price * num * 0.85 << endl;
	else if(num >= 20 && num < 30)
		cout << "���չ�˾���� 30% ���ۿۣ����ۼ�Ϊ " << price * num * 0.7 << endl;
	else
		cout << "���չ�˾���� 40% ���ۿۣ����ۼ�Ϊ " << price * num * 0.55 << endl;

	return 0;
}