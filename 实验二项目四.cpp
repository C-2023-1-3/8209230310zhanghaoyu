#include<iostream>
using namespace std;
int main()
{
	cout << "输入第一个数字" << endl;
	double a;
	cin >> a;
	cout << "输入符号" << endl;
	char b;
	cin >> b;
	cout << "输入的第二个数字" << endl;
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
			cout << "除数不能为0" << endl;
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
			cout << "a不是整数，不能取余" << endl;
		}
	}
	else
	{
		cout << "运算符非法" << endl;
	}




	return 0;
}