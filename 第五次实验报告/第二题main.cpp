//main.cpp                      ������ģ��
#include <iostream>             //��������ͷ�ļ���������
#include "student.h"
int main()
{
	Student stud;                //�������
	Student stud1;
	stud1.set_value(007, "tcg", 'm');
	stud1.display();
	stud.set_value(123, "haha", 'w');
	stud.display();
	//ִ��stud�����display����
	return 0;
}