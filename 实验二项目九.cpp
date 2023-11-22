#include<iostream>
using namespace std;
#include<vector>
void test()
{
	double danjia = 0.8;
	int zongshu = 0;
	int tianshu = 0;
	double zonghuafei = 0;
	double pingjun;
	vector<double>v1;

	for (int i = 1;;i*=2)
	{
		double jinrihuafei = 0;
		zongshu += i;
		if (zongshu >= 100)
		{
			zongshu /= 2;
			for (vector<double>::iterator it = v1.begin(); it != v1.end(); it++)
			{
				zonghuafei += *it;
			}
			pingjun = zonghuafei / tianshu;
			cout << "平均每天花了" << pingjun << "元" << endl;
			break;

		}
		tianshu++;
		jinrihuafei = danjia * i;
		cout << "第" << tianshu << "花了" << jinrihuafei << "元" << endl;
		v1.push_back(jinrihuafei);


	}
}


int main()
{
	
	test();
	return 0;
}