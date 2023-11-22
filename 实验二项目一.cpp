#include<iostream>
using namespace std;
int main()
{
	cout << "请输入一个字符" << endl;
	char a;
	cin >> a;
	int b = (int)a;
	if (b > 96)
	{
		int c = b - 32;
		char d = (char)c;
		cout << "对应的大写字母为：" << d << endl;
	}
	else
	{
		cout << b + 1 << endl;
	}


	return 0;
}