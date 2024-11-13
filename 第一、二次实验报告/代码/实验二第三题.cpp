#include<iostream>
using namespace std;
int main()
{
	cout << "请输入三角形的三条边" << endl;
	double a, b, c,zhouchang;
	cin >> a >> b >> c;
	zhouchang = a + b + c;
	cout << "三角形的周长为：" << zhouchang << endl;
	if (a+b >  c && a+c > b && b+c > a) {//判断是否为三角形//
		if (a == b || a == c || b == c) {
			cout << "该三角形是等腰三角形" << endl;
		}
		else {
			cout << "该三角形不是等腰三角形" << endl;
		}
	}
	else {
		cout << "不能构成三角形" << endl;
	}
	return 0;
}