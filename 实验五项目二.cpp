#include<iostream>
#include"student.h"
void Student::display()         //�����ⶨ��display�ຯ��
{
    cout <<"num:" << num << endl;
    cout <<"name:" << name << endl;
    cout << "sex:" << sex << endl;
}
void Student::set_value(int num,string name,char sex)//Ϊʲôchar[]�ǲ����޸ĵ�;��ֵ
{
    this->num = num;
   // name += '\0';//��������У���Ϊ��Ĳ���name�ǲ�����β���ģ�
    //�����㸳ֵ��this->name�Ժ���Ҳû�н�β�����͵����������
    // ʱ���������ֱ�������Ϊֹ���ͻ�������룬��������Ҫ������������һ����β����
    name.copy(this->name, name.length(),0);//������һ��string��ֵ��char[]��string��ĳ�Ա����
    this->sex=sex; 
    
}