#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		int a, b, c;
		cout << "�����������ε�������" << endl;
		cin >> a >> b >> c;
		if (a + b > c && b + c > a && a + c > b)
		{
			if (a == b || b == c || a == c)
			{
				cout << "��������Ϊ����������" << endl;
			}
			else
			{
				cout << "�������β��ǵ���������" << endl;
			}
		}
		else
		{
			cout << "�������޷����ɵ���������" << endl;
		}
	}



	return 0;
}