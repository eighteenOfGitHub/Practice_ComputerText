//47.	
//��д�����ҳ���ά��������������������Ԫ�ؼ���λ�ã�
//�������ڵ����������ģ������ڵ�����Ҳ�����ġ��������е�Ԫ�ظ�����ͬ��
//��ʾ��
//���ڵ�i����Ѱ�Ҵ������ֵԪ�أ��������к��У�
//Ȼ���������ڵ����ж����Ƿ�Ҳ�����ģ�
//��������������
//���������־������ʾ�ҵ����Ԫ�ء�
#include<iostream>
using namespace std;

void 	findmax(int x, int y, double array[][100])
{
	for (int i = 0; i < y; i++)
	{
		//���ڼ�¼��������������
		int maxx = array[i][0];
		int id_maxx = 0;

		//�ҵ�һ����������
		for (int j = 0; j < x; j++)
		{
			if (maxx < array[i][j])
			{
				maxx = array[i][j];
				id_maxx = j;
			}
		}

		//���ڼ�¼������
		int maxy = array[i][id_maxx];


		//�ҵ�������������
		for (int i = 0; i < y; i++)
		{
			if (maxy < array[i][id_maxx])
			{
				maxy = array[i][id_maxx];
			}
		}

		//�ж��ǲ��Ǹ����Ҹ����ж���������
		if (maxx == maxy)
		{
			cout << "�� " << i + 1 << " �У��� " << id_maxx + 1 << " �е�Ԫ�� " << array[i][id_maxx] 
				<< " �Ǹ��и����ж���������" << endl;
		}
	}




}

void run()
{
	cout << "��������������(x<100)��";
	int x;
	cin >> x;

	cout << "��������������(y<100)��";
	int y;
	cin >> y;

	cout << "��������������Ԫ�أ�" << endl;
	double array[100][100];
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cin >> array[i][j];
		}
	}

	cout << endl << "����Ϊ��" << endl;
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}

	findmax(x, y, array);
}

int main()
{
	run();




	return 0;
}