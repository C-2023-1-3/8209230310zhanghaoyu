#include<iostream>
using namespace std;
#include<string>
void count(const char s[], int counts[])
{
	int a = strlen(s);
	for (int i = 0; i < a; i++)
	{
		for (int j = 0; j < 26; j++)
		{
			if ((int)s[i] == (j + 65) || (int)s[i] == (j + 97))
			{
				counts[j]++;
			}
		}
	}
}
int main()
{
	int counts[26]={0};、
	char s1[100];
	cin.getline(s1,100);
	count(s1, counts);
	for (int i = 0; i < 26; i++)
	{
		if (counts[i] != 0)
		{
			cout << (char)(i + 97) << "的数量为：" << counts[i] << endl;
		}
	}

	return 0;
}
