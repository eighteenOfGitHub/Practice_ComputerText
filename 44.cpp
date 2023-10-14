//44.	
//用数组存储数据，实现筛选法求素数问题的求解。
//要求求出2到1000之间的所有素数。
//筛选法求出2～N间的所有素数的方法是：
//首先将这些数全部放入一个数组中，然后重复下面的操作直到数组为空为止：
//a.找出其中的最小数K，则K一定是一个素数，因此可输出。
//b.从数组中删除K及其所有倍数。
#include<iostream>
using namespace std;

int main()
{
	int judge = 0;
	bool array[2001] = {};	//初始元素默认为0， 变1后不可读
	for ( int i = 2; i <= 2000; i++)
	{
		if (array[i] == 0)
		{
			cout << i << "\t";		//输出质数
			judge++;
			if (judge == 10)
			{
				cout << endl;
				judge = 0;
			}
			for (int j = 1; j * i <= 2000; j++)
				array[j * i] = 1;	//删除
		}
	}





	return 0;
}