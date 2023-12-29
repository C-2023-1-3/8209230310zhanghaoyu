#include<iostream>
using namespace std;
#include<ctime>
class xuesheng
{
private:
	int xuehao;
	double chengji;
public:
	int huoquxuehao()
	{
		return xuehao;
	}
	double huoquchengji()
	{
		return chengji;
	}
	void fuzhixuehao(int xuehao)
	{
		this->xuehao = xuehao;
	}
	void fuzhichengji(double& chengji)
	{
		this->chengji = chengji;
	}
};
void max(xuesheng arr[])
{
	xuesheng* p=&arr[0];
	for (int i = 1; i < 5; i++)
	{
		if (arr[1].huoquchengji() > p->huoquchengji())
		{
			p = &arr[i];
		}
	}
	cout << "成绩最高者学号为：" << p->huoquxuehao() << endl;
}
int main()
{
	xuesheng arr[5];
	srand((unsigned int)time(NULL));
	int xuehao = 10000;
	for (int i = 0; i < 5; i++)
	{
		double num = rand() % 100 + 1;
		arr[i].fuzhichengji(num);
		arr[i].fuzhixuehao(xuehao+i+1);
		//cout << arr[i].huoquchengji() << endl;
	}
	max(arr);

	return 0;
}