#pragma once
#include<iostream>
using namespace std;
bool is_valid(double side1, double side2, double side3);
double area(double side1, double side2, double side3);



#include<iostream>
using namespace std;
bool is_valid(double side1, double side2, double side3)
{
	if (((side1 + side2) > side3) && ((side2 + side3) > side1) && ((side1 + side3) > side2))
	{
		return true;
	}
	return false;
}
double area(double side1, double side2, double side3)
{
	int s = (side1 + side2 + side3) / 2;
	return sqrt(s*(s - side1)*(s - side2)*(s - side3));
}
int main()
{
	cout << "输入三条边长" << endl;
	int a, b, c;
	cin >> a>> b>> c;
	if (is_valid(a, b, c) == 0)
	{
		cout << "三角形不存在" << endl;
	}
	else
	{
		cout << "面积为："<<area(a, b, c) << endl;
	}

	return 0;
}
