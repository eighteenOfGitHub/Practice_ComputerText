//4.
//输入一位同学的考试成绩，
//若是90~100分，输出“Excellent”，
//80~89输出“Very good”，
//70~79输出“Good”， 
//60~69输出“Pass”，
//60分以下输出“No Pass”。

#include<iostream>
using namespace std;

int main()
{
	double score;

	while (1)
	{
		cin >> score;
		if (score < 0 || score>100)
		{
			cout << "输入有误，请重新输入。" << endl;
			system("pause");
			system("cls");
		}
		else
			break;
	}

	int option = score / 10;
	switch (option)
	{
	case 10:
	case 9:
	{
		cout << "Excellent" << endl;
		break;
	}
	case 8:
	{
		cout << "Very good" << endl;
		break;
	}
	case 7:
	{
		cout << "Good" << endl;
		break;
	}
	case 6:
	{
		cout << "Pass" << endl;
		break;
	}
	default:
	{
		cout << "No Pass" << endl;
		break;
	}
	}

	return 0;
}