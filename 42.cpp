//42.
//���ʵ�֡�ð�������㷨���������������������С�����������������
//Ҫ����һ������������ԭ����void bubble(int data[], int length)��
#include<iostream>
using namespace std;

//��������
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//����ð��
void ascendingbubble(int data[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
			if (data[j] > data[j + 1])
				swap(data[j], data[j + 1]);
	}
	for (int i = 0; i < length; i++)
		cout << data[i] << " ";
}

//����ð��
void descendinggubble(int data[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
			if (data[j] < data[j + 1])
				swap(data[j], data[j + 1]);
	}
	for (int i = 0; i < length; i++)
		cout << data[i] << " ";
}

void run()
{
	cout << "��������Ҫ���������������(n<=1000)�� ";
	int length;
	cin >> length;

	cout << "��������Ҫ������������У� ";
	int data[1000];
	for (int i = 0; i < length; i++)
	{
		cin >> data[i];
	}

	cout << "��ѡ������ʽ��" << endl;
	cout << "1.��������" << endl;
	cout << "2.��������" << endl;

	int option;
	cin >> option;

	if (option == 1)
		ascendingbubble(data, length);
	else if (option == 2)
		descendinggubble(data, length);
	else
		cout << "����������ͱ���" << endl;
}
int main()
{
	run();


	return 0;
}
//4 3 2 1 6 5 9 7 8 0