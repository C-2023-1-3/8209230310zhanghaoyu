#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<conio.h>
void test01()
{
	int zimu = 0;
	int shuzi = 0;	
	int fuhao = 0;
	cout << "������һ���ַ���" << endl;
	string zifuchuan;
	//cin >> zifuchuan;
	char a;																																								
	while ((a = getchar()) != '\n')
	{
		cout << ((int)a) << endl;
		if ((65 <=((int)a)&& ((int)a) <= 90) || (97 <= ((int)a)&& ((int)a) <= 122))
		{
			zimu++;
		}
		else if (48 <= ((int)a)&&((int)a) <= 57)
		{
			shuzi++;
		}
		else
		{
			fuhao++;
		}
	}
	cout << zimu << "   " << shuzi << "   " << fuhao << "   " << endl;


}

int main()
{
	
	/////////*string arr[3];
	////////int arr2[3][4];
	////////int pingjunfen;
	////////for(int i=0;i<3;i++)
	////////{
	////////	cout << "����ѧ������" << endl;
	////////	string xingming;
	////////	cin >> xingming;
	////////	arr[i] = xingming;
	////////	for (int h = 0; h< 3; h++)
	////////	{
	////////		int shengji;
	////////		cout << "����ɼ�" << endl;
	////////		cin >> shengji;
	////////		arr2[i][h] = shengji;
	////////	}
	////////	pingjunfen = (arr2[i][2] + arr2[i][1] + arr2[i][0])/3;
	////////	arr2[i][3] = pingjunfen;
	////////	
	////////}
	////////for (int i = 0; i < 3; i++)
	////////{
	////////	cout << arr[i] << "�ĳɼ�" << arr2[i][0] << "  " << arr2[i][1] << "  " << arr2[i][2]<<"ƽ����Ϊ��"<<arr2[i][3] << endl;
	//////////////}*/
	test01();
	return 0;
}