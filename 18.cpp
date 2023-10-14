//18.	
//编写一个程序，
//输入全班同学某门课考试成绩，计算平均成绩并找出其中最高分与最低分。
//（提示：批量数据通常不事先规定输入的数据数量，
//而是以一个特殊的标志作为输入结束。程序根据结束标志统计人数）
#include<iostream>
using namespace std;


int main()
{
	double score, all = 0, everage = 0, max = 0, min = 100;
	cout << "请依次输入全班同学成绩（输入 -1 作为结束标志）：" << endl;
	cin >> score;
	for (int i = 1; score != -1; i++)
	{
		all += score;
		everage = all / i;
		max = (max > score) ? max : score;
		min = (min < score) ? min : score;
		cin >> score;
	}

	cout << "平均分为： " << everage << endl;
	cout << "最高分为： " << max << endl;
	cout << "最低分为： " << min << endl;


	return 0;
}