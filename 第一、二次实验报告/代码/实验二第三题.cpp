#include<iostream>
using namespace std;
int main()
{
	cout << "�����������ε�������" << endl;
	double a, b, c,zhouchang;
	cin >> a >> b >> c;
	zhouchang = a + b + c;
	cout << "�����ε��ܳ�Ϊ��" << zhouchang << endl;
	if (a+b >  c && a+c > b && b+c > a) {//�ж��Ƿ�Ϊ������//
		if (a == b || a == c || b == c) {
			cout << "���������ǵ���������" << endl;
		}
		else {
			cout << "�������β��ǵ���������" << endl;
		}
	}
	else {
		cout << "���ܹ���������" << endl;
	}
	return 0;
}