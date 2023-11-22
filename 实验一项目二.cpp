#include<iostream>
using namespace std;
#define yuanzhoulv 3.1415926535897
int main()
{
	int yuanzhuidi;
	cout << "ÇëÊäÈëÔ²×¶µ×µÄ°ë¾¶" << endl;
	cin >> yuanzhuidi;
	cout << "ÇëÊäÈëÔ²×¶µÄ×¶¸ß" << endl;
	int zhuigao;
	cin >> zhuigao;
	int tiji = yuanzhoulv * yuanzhuidi * yuanzhuidi*zhuigao/3;
	cout << "Ô²×¶µÄÌå»ýÎª£º" << tiji << endl;
	return 0;
}
