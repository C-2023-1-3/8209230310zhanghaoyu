#include<iostream>
using namespace std;
int main()
{
	cout << "请输入两个数" << endl;
	int a, b;
	cin >> a >> b;
	if (a > b)
	{
		for (int i = a ; i >= 1; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				cout << "最大公因数为：" << i << endl;
				break;
			}
		}
		for (int i = b;; i++)
		{
			if (i % a == 0 && i % b == 0)
			{
				cout << "最大公倍数为：" << i << endl;
				break;
			}
		}
	}
	else
	{
		for (int i = b; i >= 1; i--)
		{
			if (a % i == 0 && b % i == 0)
			{
				cout << "最大公因数为：" << i << endl;
				break;
			}
		}
		for (int i = a;; i++)
		{
			if (i % a == 0 && i % b == 0)
			{
				cout << "最大公倍数为：" << i << endl;
				break;
			}
		}
	}



	return 0;
}