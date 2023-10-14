//43.
//给定含有m + n个元素的整型数组A（其中m > 0, n > 0），
//它分为两个互不重叠的，长度分别为m和n的子数组段，
//写出交换这两个子数组段的程序，
//要求不引入数组A以外的数组，但可引入若干中间变量。

#include<iostream>
using namespace std;
int main() {
	int n, m, * p, k;
	cin >> n >> m;
	p = new int[n + m];
	for (int i = 0; i < m + n; i++)
		cin >> *(p + i);
	for (int i = n - 1; i >= 0; i--) {
		k = *(p + i);
		for (int j = 0; j < m; j++) {
			*(p + i + j) = *(p + i + j + 1);
		}
		*(p + i + m) = k;

	}
	for (int i = 0; i < m + n; i++) {
		cout << *(p + i) << " ";
	}
	return 0;
}

//找的答案，这题没看懂要干啥