#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
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
	Time tl;           //定义t1为Time类对象
	int hour, minute, sec;
	cin >> hour; //输入设定的时间 
	cin >> minute;
	cin >> sec;
	tl.fuzhihour(hour);
	tl.fuzhiminute(minute);
	tl.fuzhisec(sec);
	cout << tl.shuchuhour() << "：" << tl.shuchuminute() << "：" << tl.shuchusec() << endl;
	return 0;
}
