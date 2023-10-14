//42.
//编程实现“冒泡排序算法”，将输入的若干整数由小到大（升序）排序输出。
//要求定义一个排序函数，其原型是void bubble(int data[], int length)。
#include<iostream>
using namespace std;

//交换函数
void swap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//升序冒泡
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

//降序冒泡
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
	cout << "请输入所要排序的整数的数量(n<=1000)： ";
	int length;
	cin >> length;

	cout << "请输入所要排序的整数数列： ";
	int data[1000];
	for (int i = 0; i < length; i++)
	{
		cin >> data[i];
	}

	cout << "请选择排序方式：" << endl;
	cout << "1.升序排列" << endl;
	cout << "2.降序排列" << endl;

	int option;
	cin >> option;

	if (option == 1)
		ascendingbubble(data, length);
	else if (option == 2)
		descendinggubble(data, length);
	else
		cout << "不听话程序就崩溃" << endl;
}
int main()
{
	run();


	return 0;
}
//4 3 2 1 6 5 9 7 8 0