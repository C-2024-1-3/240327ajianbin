//student.h               (这是头文件，在此文件中进行类的声明)
#include<iostream>
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int n, const char* na, char s);
private:
	int num;
	char name[20];
	char sex;
};
