//46.	
//���ʵ�ֲ��Ҿ��������Ԫ�ص�λ�á�
//Ҫ������һ������������Ԫ�أ�����þ���
//�������������������ڵ��С��кż���Ԫ�ص�ֵ��
#include<iostream>
using namespace std;

void showmax(int x,int y,double array[][100])
{
	double max = array[0][0];
	int maxx = 1;
	int maxy = 1;

	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			if (max < array[i][j])
			{
				max = array[i][j];
				maxx = j + 1;
				maxy = i + 1;
			}
		}
	}

	cout << "�����������Ϊ�� " << max << endl;
	cout << "λ�ڵ� " << maxx << " �У��� " << maxy << " ��" << endl;


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

	cout << endl <<"����Ϊ��" <<endl;
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cout << array[i][j] << "\t";
		}
		cout << endl;
	}
	
	showmax(x,y,array);

}

int main()
{
	run();




	return 0;
}