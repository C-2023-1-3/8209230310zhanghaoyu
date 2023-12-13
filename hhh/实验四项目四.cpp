#include<iostream>
using namespace std;
int main()
{
	int a;
	cout << "定义数组1长度" << endl;
	cin >> a;
	int* arr1 = new int[a];
	for (int i = 0; i < a; i++)
	{
		cout << "输入内容" << endl;
		int h;
		cin >> h;
		arr1[i] = h;
	}
	int  b;
	cout << "定义数组2长度" << endl;
	cin >> b;
	int* arr2 = new int[b];
	for (int i = 0; i < a; i++)
	{
		cout << "输入内容" << endl;
		int h;
		cin >> h;
		arr2[i] = h;
	}
	int* arr3 = new int[a + b];
	for (int i = 0; i < a; i++)
	{
		arr3[i] = arr1[i];
	}
	for (int i = 0; i < b; i++)
	{
		arr3[a + i] = arr2[i];
	}
	for (int i = 0; i < a + b; i++)
	{
		for (int j = 0; j < a + b-1; j++)
		{
			if (arr3[j] > arr3[j + 1])
			{
				int temp = arr3[j];
				arr3[j] = arr3[j + 1];
				arr3[j + 1] = temp;
			}
		}
	}
	for (int i = 0; i < a + b; i++)
	{
		cout << arr3[i] <<"  ";
	}
	return 0;
}
