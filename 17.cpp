//17.
//������һԪ���η���ax2 + bx + c = 0�ĸ���
//Ҫ������걸�Ĳ������ݼ�������a, b, c����ȡֵ�Ը���Ӱ�졣
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c;
	cout << "����������a,b,c��";
	cin >> a >> b >> c;
	double derta = b * b - 4 * a * c;
	if (derta > 0)
	{
		cout << "�÷�����������ͬ��ʵ�������ֱ�Ϊ��" << endl;
		cout << "x1 = " << (-b + sqrt(derta)) / (2 * a) << endl;
		cout << "x2 = " << (-b - sqrt(derta)) / (2 * a) << endl;
	}
	else if (derta == 0)
	{
		cout << "�÷���ֻ��һ��ʵ������Ϊ��" << endl;
		cout << "x = " << (-b) / (2 * a) << endl;
	}
	else
	{
		cout << "�÷�����ʵ������" << endl;
	}

	return 0;
}