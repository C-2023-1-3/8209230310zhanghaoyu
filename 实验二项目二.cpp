#include<iostream>
using namespace std;
int main()
{
	while (1)
	{
		float x=0;
		cout << "������x��ֵ" << endl;
		cin >> x;
		float y=0;
		if (x < 1 && x>0)
		{
			y = 3 - (2 * x);
			cout << "y��Ӧ��ֵΪ��" << y << endl;
		}
		else if (x < 5 && x >= 1)
		{
			y = 2 / 4 * x + 1;
			cout << "y��Ӧ��ֵΪ��" << y << endl;
		}
		else if (x < 10 && x >= 5)
		{
			y = x * x;
			cout << "y��Ӧ��ֵΪ��" << y << endl;
		}
		else
		{
			cout << "������Χ" << endl;
		}

		
	}

	return 0;
}