#include<iostream>
using namespace std;
class changfangti
{
private:
	int length;
	int width;
	int height;
public:
	changfangti()
	{
		cout << "���볤������" << endl;
		cin >> this->length;
		cin >> this->width;
		cin >> this->height;
	}
	int jisuantiji()
	{
		return length * width * height;
	}
	void shuchutiji()
	{
		cout << "���Ϊ��"<<jisuantiji() << endl;
	}
};
int main()
{
	changfangti hhh1;
	changfangti hhh2;
	changfangti hhh3;
	hhh1.jisuantiji();//��һ����û�ж�����
	hhh1.shuchutiji();
	hhh2.shuchutiji();
	hhh3.shuchutiji();
	return 0;
}