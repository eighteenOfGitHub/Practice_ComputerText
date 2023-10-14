//45.	
//���ʵ�ֶ��ֲ����㷨�����֣��۰룩���ң��������㷨���£�
//���� a �е� n �����Ӵ�С�����򣩵�˳�����У�Ҫ����һ���� x �Ƿ��� a �У��۰�����㷨��˼·�ǣ�
//���������Ϊ[lower�� upper]����ֵlower = 0, upper = n - 1; �㷨���裺
//��1���������� a ��Ԫ�ؼ� x��
//��2��x �Ƿ�Ϊ a �ĵ�һ�����һ��Ԫ�ء���������֮һ���㷨������
//��3�����������ȷ�Ϊ[lower, mid]��[mid, upper]��midΪ�����е㣬ÿ��ȡ���м�����м�飬
//�� x = a[mid]��x �����������㷨������
//�� x<a[mid]�����ں������ [mid, upper] ���ظ��۰������
//�� x>a[mid]������ǰ������ [lower, mid] ���ظ��۰������
//����ִ���������裬ʹ lower �� upper��Ȼ���� 1����ʾδ������ x������ a[mid]=x��

#include<iostream>
using namespace std;

//��������
void swap(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//����ð��
void descendinggubble(double data[], int length)
{
	for (int i = 0; i < length; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
			if (data[j] < data[j + 1])
				swap(data[j], data[j + 1]);
	}
}

bool isfindelement(double data[], int length, double element)
{
	int lower = 0;
	int upper = length - 1;
	int mid = (lower + upper) / 2;
	if (element == data[lower] || element == data[upper])
		return true;
	else 
	{
		while (upper - lower != 1) 
		{
			if (element < data[mid])
			{
				lower = mid;
				mid = (lower + upper) / 2;
			}
			else if (element > data[mid])
			{
				upper = mid;
				mid = (lower + upper) / 2;
			}
			else 
				return true;
		}
		return false;
	}
}

void run()
{
	cout << "��������ҵ������С(n<=1000)�� ";
	int length;
	cin >> length;

	cout << "��������Ҫ���ҵ�����Ԫ�أ� ";
	double data[1000];
	for (int i = 0; i < length; i++)
	{
		cin >> data[i];
	}

	descendinggubble(data, length);//����

	cout << "����������Ϊ��";
	for (int i = 0; i < length; i++)
	{
		 cout << data[i] << " ";
	}
	
	cout << endl;
	cout << "��������Ҫ���ҵ�Ԫ�أ� ";

	double element;
	cin >> element;

	if (isfindelement(data, length, element))
		cout << "��Ԫ�ش���";
	else
		cout << "��Ԫ�ز�����";
}
int main()
{
	run();

	return 0;
}

//1 2 3 4 5 6 17 8 9 0