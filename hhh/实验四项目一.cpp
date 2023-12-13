#include<iostream>
using namespace std;
int main()
{
	int arr[10];
	int shuliang = 0;
	for (int i = 0; i < 10; i++)
	{
		cout << "输入数" << endl;
		int a;
		cin >> a;
		arr[shuliang] = a;
		shuliang++;
		for (int j = 0; j < shuliang-1; j++)
		{
			if (arr[j] == a)
			{
				arr[shuliang] = NULL;
				shuliang--;
				break;
			}
		}
	}
	cout << shuliang << endl;
	for (int i = 0; i < shuliang; i++)
	{
		cout << arr[i] <<"   ";
	}

	return 0;
}
