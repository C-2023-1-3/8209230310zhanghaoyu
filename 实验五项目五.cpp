#include<Iostream>
using namespace std;
class point
{
private:
	int x;
	int y;
public:
	point(int x,int y)//���ù��캯�����ݲ�����
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
	void setPoint(int i, int j)//���������ط��ĳ����ã���ô�����ʵ�ξͲ��������֣�ֻ���Ǳ���
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