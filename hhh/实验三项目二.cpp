#include<iostream>
using namespace std;
bool is_prime(int num)
{
	for (int i = num-1; i > 1; i--)
	{
		if (num % i == 0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int shuliang=0;
	int zongshu = 0;
	for (int i = 2;; i++)
	{
		if (is_prime(i) == true)
		{
			cout << i << "  ";
			shuliang++;
			zongshu++;
		}
		if (shuliang == 10)
		{
			cout << endl;
			shuliang = 0;
		}
		if (zongshu == 200)
		{
			break;
		}
	}

	return 0;
}
