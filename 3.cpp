//3.	
//ĳ���Ű���ͬ�ͺ����ճ������ŷѣ�
//���г���ѣ�
//Ħ�г�2Ԫ��
//С����5Ԫ��
//��ͳ������8Ԫ��
//����12Ԫ��
//��дһ�����򣬰������Ĳ�ͬ�ͺż���ͨ���ô���Ӧ���Ĺ��ŷѡ�
//����ʾ�������������Բ�ͬ�ͺŵĳ������б��룩
#include<iostream>
#include<fstream>
using namespace std;

void pass(int option)
{
	switch (option)
	{
	case 1:
		cout << "ͨ��һ�����г������շ�" << endl;
		break;
	case 2:
		cout << "ͨ��һ��Ħ�г����շ� 2 Ԫ" << endl;
		break;
	case 3:
		cout << "ͨ��һ��С�������շ� 5 Ԫ" << endl;
		break;
	case 4:
		cout << "ͨ��һ����ͳ����շ� 8 Ԫ" << endl;
		break;
	case 5:
		cout << "ͨ��һ���������շ� 8 Ԫ" << endl;
		break;
	case 6:
		cout << "ͨ��һ�����񳵣��շ� 12 Ԫ" << endl;
		break;
	default:
		cout << "ͨ��һ�����⳵���㿴�Ÿ�" << endl;
		break;
	}
}

void passall(int option)
{

	int vehicle[6] = { 0,0,0,0,0,0 };

	//�����ļ���¼
	ifstream ifs("vehicle.exe", ios_base::in);
	ifs.read(reinterpret_cast<char*>(&vehicle), sizeof(vehicle));
	ifs.close();

	//�ۼƳ�����
	vehicle[option-1]++;

	//�����ļ�
	ofstream ofs("vehicle.exe", ios_base::out);
	ofs.write(reinterpret_cast<char*>(&vehicle), sizeof(vehicle));
	ofs.close();

	//����ܼ�
	cout << "�ܼƣ� " << endl;
	cout << "ͨ�� " << vehicle[0] << " �����г�" << endl;
	cout << "ͨ�� " << vehicle[1] << " ��Ħ�г�" << endl;
	cout << "ͨ�� " << vehicle[2] << " ��С����" << endl;
	cout << "ͨ�� " << vehicle[3] << " ����ͳ�" << endl;
	cout << "ͨ�� " << vehicle[4] << " ������" << endl;
	cout << "ͨ�� " << vehicle[5] << " ������" << endl;
	cout << "�ܼ��շѣ� " << vehicle[1] * 2 + 
							vehicle[2] * 5 + 
							(vehicle[3] + vehicle[4]) * 8 + 
							vehicle[5] * 12 << " Ԫ" << endl;
}
      
int main()
{
	while (1)
	{
	recin:
		cout << "1.���г�" << endl
			<< "2.Ħ�г�" << endl
			<< "3.С����" << endl
			<< "4.��ͳ�" << endl
			<< "5.����" << endl
			<< "6.����" << endl;
		cout << "�����복��������Ӧ�Ĵ��룺";

		int option;
		cin >> option;
		if (option < 1 || option>6)
		{
			cout << "����������������롣" << endl;
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
