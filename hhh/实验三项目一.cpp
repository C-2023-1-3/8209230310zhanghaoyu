#include<iostream>
using namespace std;
#include<vector>
int test01(int& m, int& n)
{
	if (m > n)
	{

		for (int i = n; i > 0; i--)
		{
			if (m % i == 0 && n % i == 0)
			{
				return i;
			}
		}
	}
	if (m < n)
	{

		for (int i = m; i > 0; i--)
		{
			if (m % i == 0 && n % i == 0)
			{
				return i;
			}
		}
	}
}
int test02(int& m, int& n)
{

	for (int i = 1;; i++)
	{
		if ((i * m) > n && (i * m) % n == 0)
		{
			return i * m;
		}
	}
}
int main()
{
	/////////////////////////////////////////////////////////////////////////////////////////////
	cout << "输入自然数m" << endl;
	int m;
	cin >> m;
	cout << "输入自然数n" << endl;
	int n;
	cin >> n;
	cout << "最大公因数为" << test01(m, n) << endl;
	cout << "最小公倍数为" << test02(m, n) << endl;
	return 0;
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}
