//17.
//编程求解一元二次方程ax2 + bx + c = 0的根。
//要求：设计完备的测试数据集，考虑a, b, c各种取值对根的影响。
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	double a, b, c;
	cout << "请依次输入a,b,c：";
	cin >> a >> b >> c;
	double derta = b * b - 4 * a * c;
	if (derta > 0)
	{
		cout << "该方程有两个不同的实数根，分别为：" << endl;
		cout << "x1 = " << (-b + sqrt(derta)) / (2 * a) << endl;
		cout << "x2 = " << (-b - sqrt(derta)) / (2 * a) << endl;
	}
	else if (derta == 0)
	{
		cout << "该方程只有一个实数根，为：" << endl;
		cout << "x = " << (-b) / (2 * a) << endl;
	}
	else
	{
		cout << "该方程无实数根。" << endl;
	}

	return 0;
}