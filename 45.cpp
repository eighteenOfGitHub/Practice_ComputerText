//45.	
//编程实现二分查找算法。二分（折半）查找（搜索）算法如下：
//数组 a 中的 n 个数从大到小（降序）的顺序排列，要检索一个数 x 是否在 a 中，折半查找算法的思路是：
//设查找区间为[lower， upper]，初值lower = 0, upper = n - 1; 算法步骤：
//（1）输入数组 a 的元素及 x；
//（2）x 是否为 a 的第一或最后一个元素。若是其中之一，算法结束；
//（3）将区间两等分为[lower, mid]和[mid, upper]，mid为区间中点，每次取出中间项进行检查，
//若 x = a[mid]，x 被检索到，算法结束；
//若 x<a[mid]，则在后半区间 [mid, upper] 内重复折半检索；
//若 x>a[mid]，则在前半区间 [lower, mid] 内重复折半检索。
//反复执行上述步骤，使 lower 和 upper相等或相差 1（表示未检索到 x），或 a[mid]=x。

#include<iostream>
using namespace std;

//交换函数
void swap(double& a, double& b)
{
	double temp = a;
	a = b;
	b = temp;
}

//降序冒泡
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
	cout << "请输入查找的数组大小(n<=1000)： ";
	int length;
	cin >> length;

	cout << "请输入所要查找的数组元素： ";
	double data[1000];
	for (int i = 0; i < length; i++)
	{
		cin >> data[i];
	}

	descendinggubble(data, length);//排序

	cout << "排序后的数组为：";
	for (int i = 0; i < length; i++)
	{
		 cout << data[i] << " ";
	}
	
	cout << endl;
	cout << "请输入所要查找的元素： ";

	double element;
	cin >> element;

	if (isfindelement(data, length, element))
		cout << "该元素存在";
	else
		cout << "该元素不存在";
}
int main()
{
	run();

	return 0;
}

//1 2 3 4 5 6 17 8 9 0