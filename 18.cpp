//18.	
//��дһ������
//����ȫ��ͬѧĳ�ſο��Գɼ�������ƽ���ɼ����ҳ�������߷�����ͷ֡�
//����ʾ����������ͨ�������ȹ涨���������������
//������һ������ı�־��Ϊ���������������ݽ�����־ͳ��������
#include<iostream>
using namespace std;


int main()
{
	double score, all = 0, everage = 0, max = 0, min = 100;
	cout << "����������ȫ��ͬѧ�ɼ������� -1 ��Ϊ������־����" << endl;
	cin >> score;
	for (int i = 1; score != -1; i++)
	{
		all += score;
		everage = all / i;
		max = (max > score) ? max : score;
		min = (min < score) ? min : score;
		cin >> score;
	}

	cout << "ƽ����Ϊ�� " << everage << endl;
	cout << "��߷�Ϊ�� " << max << endl;
	cout << "��ͷ�Ϊ�� " << min << endl;


	return 0;
}