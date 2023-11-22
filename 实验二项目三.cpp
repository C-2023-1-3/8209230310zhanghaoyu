#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		int a, b, c;
		cout << "请输入三角形的三条边" << endl;
		cin >> a >> b >> c;
		if (a + b > c && b + c > a && a + c > b)
		{
			if (a == b || b == c || a == c)
			{
				cout << "此三角形为等腰三角形" << endl;
			}
			else
			{
				cout << "此三角形不是等腰三角形" << endl;
			}
		}
		else
		{
			cout << "三条边无法构成等腰三角形" << endl;
		}
	}



	return 0;
}