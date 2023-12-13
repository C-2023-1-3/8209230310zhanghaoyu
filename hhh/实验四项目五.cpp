#include<iostream>
using namespace std;
#include<string>
int indexof(const char s1[], const char s2[])
{
	int a = strlen(s1);
	int b = strlen(s2);
	bool pipei;
	for (int i = 0; i < b-a+1; i++)//这个地方的i<b-a+1涉及到数学问题，假设b有10个，a有2个所以你每次对比就会往后对比一个,从第八个字符开始对比对比到第9个结束，因为本位也算一个位置，所以说从第9个字符开始往后对比也没有问题，所以应该是b-a+1。
	{
		pipei = 1;//这里一定要有，要老命了！因为你在第一次外for循环时不匹配，那pipei就为false了，那么后面所有的内for都不会再循环。所以这一行一定一定要有！！！
		for (int hh = 0; (hh < a)&&(pipei==1) ; hh++)
		{
			pipei = 0; 
			if (s1[hh] == s2[i + hh])
			{
				pipei = 1;
			}
		}
		if (pipei == 1)
		{
			return i + 1;
		}
	}
	if (pipei == false)
	{
		return -1;
	}
}
int main()
{
	char a[30];
	cin.getline(a,30);
	char b[30];
	cin.getline(b, 30);
	int jieshou = indexof(a, b);//indexof只能出现一次，因为他只要出现一次就是调用一次，即使是在if的条件里面出现也会执行内部的所有指令，所以这一行定义一个变量来接收很有必要！
	if (jieshou == -1)
	{
		cout << "不匹配" << endl;
	}
	else
	{
		cout << "匹配位次为"<<jieshou << endl;
	}
	return 0;
}

