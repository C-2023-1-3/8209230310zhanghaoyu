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
	cout << "������Ȼ��m" << endl;
	int m;
	cin >> m;
	cout << "������Ȼ��n" << endl;
	int n;
	cin >> n;
	cout << "�������Ϊ" << test01(m, n) << endl;
	cout << "��С������Ϊ" << test02(m, n) << endl;
	return 0;
	////////////////////////////////////////////////////////////////////////////////////////////////////////////////
}
