#include<iostream>
using namespace std;
class Time             // ����Time��
{
private:              // ���ݳ�ԱΪ���õ�
	int hour;
	int minute;
	int sec;
public:
	void fuzhihour(int &hour)
	{
		this->hour = hour;
	}
	void fuzhiminute(int& minute)
	{
		this->minute = minute;
	}
	void fuzhisec(int& sec)
	{
		this->sec = sec;
	}
	int shuchuhour()
	{
		return hour;
	}
	int shuchuminute()
	{
		return minute;
	}
	int shuchusec()
	{
		return sec;
	}

};
int main()
{
	Time tl;           //����t1ΪTime�����
	int hour, minute, sec;
	cin >> hour; //�����趨��ʱ�� 
	cin >> minute;
	cin >> sec;
	tl.fuzhihour(hour);
	tl.fuzhiminute(minute);
	tl.fuzhisec(sec);
	cout << tl.shuchuhour() << "��" << tl.shuchuminute() << "��" << tl.shuchusec() << endl;
	return 0;
}
