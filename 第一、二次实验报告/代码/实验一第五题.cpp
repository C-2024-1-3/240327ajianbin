#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	double a, b;
	cout << "请输入华氏温度：" << endl;
	cin >> a;
	b = (a - 32) / 1.8;
	cout << "摄氏温度为：" <<fixed<< setprecision(2) << b << endl;//保留两位小数
}