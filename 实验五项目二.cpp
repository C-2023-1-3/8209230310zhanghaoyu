#include<iostream>
#include"student.h"
void Student::display()         //在类外定义display类函数
{
    cout <<"num:" << num << endl;
    cout <<"name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int num,string name,char sex)//为什么char[]是不可修改的;左值
{
    this->num = num;
   // name += '\0';//这里必须有，因为你的参数name是不带结尾符的，
    //所以你赋值给this->name以后其也没有结尾符，就导致他在输出
    // 时会库库输出，直到输出完为止，就会出现乱码，所以你需要在这里给他添加一个结尾符。
    name.copy(this->name, name.length(),0);//这里是一个string赋值给char[]的string类的成员函数
    this->sex=sex; 
    
}