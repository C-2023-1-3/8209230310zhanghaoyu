#include<iostream>
using namespace std;
int main()
{
	cout << "������һ���ַ�" << endl;
	char a;
	cin >> a;
	int b = (int)a;
	if (b > 96)
	{
		int c = b - 32;
		char d = (char)c;
		cout << "��Ӧ�Ĵ�д��ĸΪ��" << d << endl;
	}
	else
	{
		cout << b + 1 << endl;
	}


	return 0;
}