//43.
//��������m + n��Ԫ�ص���������A������m > 0, n > 0����
//����Ϊ���������ص��ģ����ȷֱ�Ϊm��n��������Σ�
//д������������������εĳ���
//Ҫ����������A��������飬�������������м������

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

//�ҵĴ𰸣�����û����Ҫ��ɶ