#include<iostream>
using namespace std;
int main()
{
	cout << "������a" << endl;
	double a;
	cin >> a;
	double b = a;
	if (a > 0)
	{
		for (int i = 0;; i++)
		{
			double c = 0;
			c = (b + a / b) / 2;
			if (c - b<pow(10, -5) && c - b>pow(-10, -5))
			{
				cout << "����ƽ����Ϊ��" << c << endl;
				break;
			}
			b = c;
		}
	}
	else
	{
		cout << "a���������" << endl;
	}

	return 0;
}