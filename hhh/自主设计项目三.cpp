#include<iostream>
using namespace std;
void paixu(int arr[],int shuliang)
{
	for (int i = 0; i < shuliang; i++)
	{
		for (int j = 0; j < shuliang-1; j++)//这里数量减一别忘了
		{
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}
int main()
{
	int a;
	cout << "请输入数组元素个数" << endl;
	cin >> a;
	int* arr = new int[a];
	for (int i = 0; i < a; i++)
	{
		int b;
		cout << "输入元素" << endl;
		cin >> b;
		arr[i] = b;
	}
	paixu(arr, a);
	for (int i = 0; i < a; i++)
	{
		cout << arr[i] << " ";
	}
	delete[]arr;
}

