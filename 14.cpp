//14.
//编程实现求解最大公约数的欧几里德算法，
//用户输入两个任意正整数，程序输出他们的最大公约数。算法如下：
//步骤1：	如果p < q，则交换p和q。
//步骤2：	令r是p / q 的余数。
//步骤3：	如果r = 0，则令g = q并终止；
// 否则令p = q, q = r并转向步骤2
#include<iostream>
using namespace std;

int main()
{
	int p, q;
 	cin >> p >> q;
	//步骤1：	如果p < q，则交换p和q。
	int m = (p > q) ? p : q;		//p大,q小
	int n = (p < q) ? p : q;
	//步骤2：	令r是p / q 的余数。
	int r = m % n;
	//步骤3：	如果r = 0，则令g = q并终止；否则令p = q, q = r并转向步骤2
	while(r != 0)
	{
		m = n;
		n = r;
		r = m % n;
	}

	//输出
	cout << n << endl;



	return 0;
}
