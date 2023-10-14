//3.	
//某大桥按不同型号征收车辆过桥费：
//自行车免费，
//摩托车2元，
//小汽车5元，
//大客车与货车8元，
//货柜车12元。
//编写一个程序，按车辆的不同型号计算通过该大桥应征的过桥费。
//（提示：可以用整数对不同型号的车辆进行编码）
#include<iostream>
#include<fstream>
using namespace std;

void pass(int option)
{
	switch (option)
	{
	case 1:
		cout << "通过一辆自行车，不收费" << endl;
		break;
	case 2:
		cout << "通过一辆摩托车，收费 2 元" << endl;
		break;
	case 3:
		cout << "通过一辆小汽车，收费 5 元" << endl;
		break;
	case 4:
		cout << "通过一辆大客车，收费 8 元" << endl;
		break;
	case 5:
		cout << "通过一辆货车，收费 8 元" << endl;
		break;
	case 6:
		cout << "通过一辆货柜车，收费 12 元" << endl;
		break;
	default:
		cout << "通过一辆奇葩车，你看着给" << endl;
		break;
	}
}

void passall(int option)
{

	int vehicle[6] = { 0,0,0,0,0,0 };

	//加载文件记录
	ifstream ifs("vehicle.exe", ios_base::in);
	ifs.read(reinterpret_cast<char*>(&vehicle), sizeof(vehicle));
	ifs.close();

	//累计车辆数
	vehicle[option-1]++;

	//保存文件
	ofstream ofs("vehicle.exe", ios_base::out);
	ofs.write(reinterpret_cast<char*>(&vehicle), sizeof(vehicle));
	ofs.close();

	//输出总计
	cout << "总计： " << endl;
	cout << "通过 " << vehicle[0] << " 辆自行车" << endl;
	cout << "通过 " << vehicle[1] << " 辆摩托车" << endl;
	cout << "通过 " << vehicle[2] << " 辆小汽车" << endl;
	cout << "通过 " << vehicle[3] << " 辆大客车" << endl;
	cout << "通过 " << vehicle[4] << " 辆货车" << endl;
	cout << "通过 " << vehicle[5] << " 辆货柜车" << endl;
	cout << "总计收费： " << vehicle[1] * 2 + 
							vehicle[2] * 5 + 
							(vehicle[3] + vehicle[4]) * 8 + 
							vehicle[5] * 12 << " 元" << endl;
}
      
int main()
{
	while (1)
	{
	recin:
		cout << "1.自行车" << endl
			<< "2.摩托车" << endl
			<< "3.小汽车" << endl
			<< "4.大客车" << endl
			<< "5.货车" << endl
			<< "6.货柜车" << endl;
		cout << "请输入车型所所对应的代码：";

		int option;
		cin >> option;
		if (option < 1 || option>6)
		{
			cout << "输入错误，请重新输入。" << endl;
			system("pause");
			system("cls");
			goto recin;
		}

		cout << endl;
		pass(option);

		cout << endl;
		passall(option);

		system("pause");
		system("cls");
	}




	return 0;
}
