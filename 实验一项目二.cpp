#include<iostream>
using namespace std;
#define yuanzhoulv 3.1415926535897
int main()
{
	int yuanzhuidi;
	cout << "������Բ׶�׵İ뾶" << endl;
	cin >> yuanzhuidi;
	cout << "������Բ׶��׶��" << endl;
	int zhuigao;
	cin >> zhuigao;
	int tiji = yuanzhoulv * yuanzhuidi * yuanzhuidi*zhuigao/3;
	cout << "Բ׶�����Ϊ��" << tiji << endl;
	return 0;
}
