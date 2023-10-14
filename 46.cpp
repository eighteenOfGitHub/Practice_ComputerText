//46.	
//编程实现查找矩阵中最大元素的位置。
//要求输入一个矩阵中所有元素，输出该矩阵，
//并输出矩阵中最大数所在的行、列号及该元素的值。
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

	cout << "矩阵中最大数为： " << max << endl;
	cout << "位于第 " << maxx << " 列，第 " << maxy << " 行" << endl;


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

	cout << endl <<"矩阵为：" <<endl;
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