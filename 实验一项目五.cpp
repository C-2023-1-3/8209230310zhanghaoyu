#include<iostream>
using namespace std;
#include<iomanip>
int main()
{
	float huashidu;
	cout << "�����뻪���¶�" << endl;
	cin >> huashidu;
	float sheshidu;
	sheshidu = (huashidu - 32) / 1.8;
	cout << "��Ӧ�������¶�Ϊ��" << setiosflags(ios::fixed)<<setprecision(2)<<sheshidu << endl;


	return 0;
}