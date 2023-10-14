//1.
//利用异或运算对输入的文本进行加密解密输出，
//用户输入一个文本（字符串, 设不超过20个字符），
//然后输入作为密钥的字符，
//程序输出加密及解密的字符串。

#include<iostream>
#include<cstring>
#include<cassert>
using namespace std;

//加密
void Encryption()
{
	char in[20];
	cout << "请输入需要加密的字符串（小于20个字符）： ";
	cin >> in;
	
	assert(strlen(in) <= 20 && "字符串大小需小于20个字符");

	char out[20]{};
	for (int i = 0; i < strlen(in); i++)
	{
		out[i] = in[i] ^ 15;//00001111
	}
	
	cout << "加密后密文为： " ;
	for (int i = 0; i < strlen(out); i++)
	{
		cout << out[i];
	}
	cout << endl;
}

void Decryption()
{
	char in[20];
	cout << "请输入需要解密的字符串（小于20个字符）： ";
	cin >> in;
	
	assert(strlen(in) <= 20 && "字符串大小需小于20个字符");

	char out[20]{};
	for (int i = 0; i < strlen(in); i++)
	{
		out[i] = in[i] ^ 15;// 00001111
	}

	cout << "解密后原文为： ";
	for (int i = 0; i < strlen(out); i++)
	{
		cout << out[i];
	}
	cout << endl;
}

void text()
{
	char a[20];
	cin >> a;
	cout << strlen(a);
}

int main()
{

	//text();

	while (1)
	{
		cout << "欢迎使用加密解密程序！" << endl;
		cout << "1.加密" << endl;
		cout << "2.解密" << endl;
		cout << "0.退出程序" << endl;
		cout << "请选择所要执行的功能：";
		int a;
		cin >> a;
		switch (a)
		{
		
		case 1:{Encryption();break;}
		
		case 2:{Decryption();break;}
		
		case 0:{return 0;break;}
		
		default:
		{
			cout << "错误选项！请重新输入。" << endl;
			break;
		}
		}
		cout << "------------------------------------" << endl;



	}






	return 0;
}