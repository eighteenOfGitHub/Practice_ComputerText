//25.	����һ�����򣬶���һ������������������������磬����123�������321��
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

int main()
{
	int mun;
	cout << "����������Ҫת���������� ";
	cin >> mun;

	int obj = 0;
	int i = 1;
	for (; mun > 0; i++)
	{
		obj = obj * 10 + (mun % 10);
		mun /= 10;
	}

	cout << "���Ϊ �� " << obj << endl;
	


	return 0;
}