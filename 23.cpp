//23.	£Ó£½£±¡Á£²£«£³¡Á£´£«£µ¡Á£¶£«¡­£«£³£¹¡Á£´£°

#include<iostream>
using namespace std;

int fun(int n)
{
	int f;
	if (n <= 0)
		f = 0;
	else
	f = n * (n - 1) + fun(n - 2);
	return f;
}

int main()
{
	int s = 0;

	s = fun(40);

	cout << "S = " << s << endl;

	return 0;
}
