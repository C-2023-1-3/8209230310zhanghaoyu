#include<iostream>
using namespace std;
int main()
{
	cout << "�����һ������" << endl;
	double a;
	cin >> a;
	cout << "�������" << endl;
	char b;
	cin >> b;
	cout << "����ĵڶ�������" << endl;
	double c;
	cin >> c;
	if (b == '+')
	{
		cout << a << "+" << c << "=" << (a + b) << endl;
	}
	else if (b == '-')
	{
		cout << a << "-" << c << "=" << (a - b) << endl;

	}
	else if(b=='*')
	{
		cout << a << "*" << c << "=" << (a * b) << endl;

	}
	else if (b == '/')
	{
		if (c == 0)
		{
			cout << "��������Ϊ0" << endl;
		}
		else
		{
			cout << a << "/" << c<< "=" << (a / b) << endl;
		}
	}
	else if (b == '%')
	{
		if ((int)a == a)
		{
			cout << a << "%" << c << "=" << ((int)a % b) << endl;
		}
		else
		{
			cout << "a��������������ȡ��" << endl;
		}
	}
	else
	{
		cout << "������Ƿ�" << endl;
	}




	return 0;
}