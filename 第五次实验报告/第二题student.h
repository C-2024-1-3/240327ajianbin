//student.h               (����ͷ�ļ����ڴ��ļ��н����������)
#include<iostream>
class Student              //������
{
public:                   //���ó�Ա����ԭ������
	void display();
	void set_value(int n, const char* na, char s);
private:
	int num;
	char name[20];
	char sex;
};
