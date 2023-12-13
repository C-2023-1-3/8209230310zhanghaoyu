#include<iostream>
using namespace std;
int main()
{
	int h;
	bool arr[100];
	for (int i = 0; i < 100; i++)
	{
		arr[i] = 1;
	}
	for (int i = 2; i <= 100; i++)
	{
		for (int j = 0; i+j*(i+1) <= 100; j++)
		{
			h = i + j * (i + 1);
			if (arr[h-1] == true)
			{
				arr[h-1] = false;
			}
			else if (arr[h-1] == false)
			{
				arr[h-1] = true;
			}
			
		}
	}
	int shuliang = 0;
	for (int i = 0; i < 100; i++)
	{
		shuliang++;
		cout << arr[i] <<"  ";
		if (shuliang == 10)
		{
			cout << endl;
			shuliang = 0;
		}
	}

	return 0;
}
