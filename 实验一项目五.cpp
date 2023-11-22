#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	float huashidu;
	cout << "请输入华氏温度" << endl;
	cin >> huashidu;
	float sheshidu;
	sheshidu = (huashidu - 32) / 1.8;
	cout << "对应的摄氏温度为：" << setiosflags(ios::fixed)<<setprecision(2)<<sheshidu << endl;


	return 0;
}