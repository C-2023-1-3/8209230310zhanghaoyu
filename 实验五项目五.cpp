#include<Iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point(int x,int y)//利用构造函数传递参数？
	{
		this->x = x;
		this->y = y;
	}
	int huoqux()
	{
		return x;
	}
	int huoquy()
	{
		return y;
	}
	void setPoint(int i, int j)//如果你这个地方改成引用，那么下面的实参就不能是数字，只能是变量
	{
		x += i;
		y += j;
	}
	void display()
	{
		cout << "(" << x << "," << y << ")" << endl;
	}
};
int main()
{
	point hhhhh(60,80);
	hhhhh.setPoint(7, 8);
	hhhhh.display();
	return 0;
}