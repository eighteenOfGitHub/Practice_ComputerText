//9.
//����5Ԫ1ֻ��ĸ��3Ԫ1ֻ��С��1Ԫ3ֻ��
//����100ԪǮ��100ֻ����
//�ʹ�����ĸ����С��������ֻ��

#include<iostream>
using namespace std;

int main()
{
	int cock, hen, chick;
	for (cock = 0; cock <= 100 / 5; cock++)
	{
		for (hen = 0; hen <= 100 / 3; hen++)
		{
			chick = 100 - hen - cock;
			if ((chick % 3 == 0) && (cock *5 + hen * 3 + chick  / 3 == 100))
			{
				cout << "cock = " << cock << endl;
				cout << "hen = " << hen << endl;
				cout << "chick = " << chick << endl;
			}
		}
	}


	return 0;
 }