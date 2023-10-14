//47.	
//编写程序找出二维整形数组中所有这样的元素及其位置：
//它在所在的行上是最大的，在所在的列上也是最大的。设数组中的元素各不相同。
//提示：
//先在第i行中寻找此行最大值元素，记下其行和列，
//然后在其所在的列判断它是否也是最大的，
//若是则输出结果。
//可以引入标志变量表示找到这个元素。
#include<iostream>
using namespace std;

void 	findmax(int x, int y, double array[][100])
{
	for (int i = 0; i < y; i++)
	{
		//用于记录最大的数及其列数
		int maxx = array[i][0];
		int id_maxx = 0;

		//找到一行中最大的数
		for (int j = 0; j < x; j++)
		{
			if (maxx < array[i][j])
			{
				maxx = array[i][j];
				id_maxx = j;
			}
		}

		//用于记录最大的数
		int maxy = array[i][id_maxx];


		//找到该列中最大的数
		for (int i = 0; i < y; i++)
		{
			if (maxy < array[i][id_maxx])
			{
				maxy = array[i][id_maxx];
			}
		}

		//判断是不是该列且该行中都是最大的数
		if (maxx == maxy)
		{
			cout << "第 " << i + 1 << " 行，第 " << id_maxx + 1 << " 列的元素 " << array[i][id_maxx] 
				<< " 是该列该行中都是最大的数" << endl;
		}
	}




}

void run()
{
	cout << "请输入矩阵的列数(x<100)：";
	int x;
	cin >> x;

	cout << "请输入矩阵的行数(y<100)：";
	int y;
	cin >> y;

	cout << "请输入矩阵的所有元素：" << endl;
	double array[100][100];
	for (int i = 0; i < y; i++)
	{
		for (int j = 0; j < x; j++)
		{
			cin >> array[i][j];
		}
	}

	cout << endl << "矩阵为：" << endl;
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