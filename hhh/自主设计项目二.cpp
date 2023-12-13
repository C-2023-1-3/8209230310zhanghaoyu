#include<iostream>
using namespace std;
int par(const char* const hhh)
{
	int pp = strlen(hhh);
	int zongshu = 0;
	for (int i = 0; i < pp; i++)
	{
		int k = 1;
		for (char j = '1'; j <= '9'; j++, k++)//这一行的9需要加单引号的啊，你个傻逼
//还有很重要的一个点就是for里面不能初始化两个不同类型的变量
		{
			if (j == hhh[i])
			{
				zongshu += k * pow(16, i);
			}
		}
		int iii = 10;
		for (char j = 'A'; j <= 'F'; j++, iii++)
		{
			if (j == hhh[i])
			{
				zongshu += iii * pow(16, i);
			}
		}
	}
	return zongshu;
}
int main()
{
	char a[100];
	cin >> a;
	cout <<par(a) << endl;
	return 0;
}
