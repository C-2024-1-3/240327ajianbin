#include<iostream>
#include<iomanip>
using namespace std;
const double PI = 3.1415926;
int main()
{
	double r, h,v;
	cout << "������Բ׶�İ뾶��" << endl;
	cin >> r;
	cout << "������Բ׶�ĸߣ�" << endl;
	cin >> h;
	v = PI * r * r * h / 3;
	cout << "Բ׶�����Ϊ��������λС������" << fixed<<setprecision(2)<<v << endl;
	return 0;
}