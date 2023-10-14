//41.编制一个程序，
//统计从标准输入设备上输入的字符流(以？结束)
//中每个英文字母出现的次数。（大小写不分开计）

#include<iostream>
using namespace std;

#include<iostream>
using namespace std;
int main() {
	int a[26] = { 0 };
	char c;
	int i;
	cin >> c;
	while (c != '?' && c!='？')
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

