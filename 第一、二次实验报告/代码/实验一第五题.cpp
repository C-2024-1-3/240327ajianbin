#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, b;
	cout << "�����뻪���¶ȣ�" << endl;
	cin >> a;
	b = (a - 32) / 1.8;
	cout << "�����¶�Ϊ��" <<fixed<< setprecision(2) << b << endl;//������λС��
}