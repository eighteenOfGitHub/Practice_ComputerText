//41.����һ������
//ͳ�ƴӱ�׼�����豸��������ַ���(�ԣ�����)
//��ÿ��Ӣ����ĸ���ֵĴ���������Сд���ֿ��ƣ�

#include<iostream>
using namespace std;

#include<iostream>
using namespace std;
int main() {
	int a[26] = { 0 };
	char c;
	int i;
	cin >> c;
	while (c != '?' && c!='��')
	{
		if (c >= 'a' && c <= 'z') 
		{
			i = c - 'a';
			a[i]++;
		}
		if (c >= 'A' && c <= 'Z') 
		{
			i = c - 'A';
			a[i]++;
		}
		cin >> c;
	}
	for (int i = 0; i < 26; i++) 
	{
		cout << char('A' + i) << ": " << a[i] << endl;
	}
	return 0;
}

