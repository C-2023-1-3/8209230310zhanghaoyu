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
	cout << "请输入一个字符串" << endl;
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
	////////	cout << "输入学生姓名" << endl;
	////////	string xingming;
	////////	cin >> xingming;
	////////	arr[i] = xingming;
	////////	for (int h = 0; h< 3; h++)
	////////	{
	////////		int shengji;
	////////		cout << "输入成绩" << endl;
	////////		cin >> shengji;
	////////		arr2[i][h] = shengji;
	////////	}
	////////	pingjunfen = (arr2[i][2] + arr2[i][1] + arr2[i][0])/3;
	////////	arr2[i][3] = pingjunfen;
	////////	
	////////}
	////////for (int i = 0; i < 3; i++)
	////////{
	////////	cout << arr[i] << "的成绩" << arr2[i][0] << "  " << arr2[i][1] << "  " << arr2[i][2]<<"平均数为："<<arr2[i][3] << endl;
	//////////////}*/
	test01();
	return 0;
}