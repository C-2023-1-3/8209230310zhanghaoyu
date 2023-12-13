#pragma once
#include<iostream>
using namespace std;
double celsius_to_fah(double cel);    //摄氏温度到华氏温度
double fahrenheit_to_cels(double fah); // 华氏温度到摄氏温度



#include<iostream>
using namespace std;
#include<iomanip>
#include"mytemperature.h"
double celsius_to_fah(double cel)//摄氏度到华氏度
{
	return cel * 1.8 + 32;
}
double fahrenheit_to_cels(double fah) // 华氏温度到摄氏温度
{
	return (fah - 32) / 1.8;
}


int main()
{
	cout << "Celsius  Fahrenheit  |  Fahrenheit  Celsius" << endl;
	for (double i = 40.0; i >30.0; i--)
	{
		cout << setiosflags(ios::fixed)<<setprecision(1)<<i << "\t" << celsius_to_fah(i) << "\t" << (10 * i - 280) << '\t' << setiosflags(ios::fixed) << setprecision(2)<< fahrenheit_to_cels(10 * i - 280) << endl;
	}
	return 0;
}
