#include<iostream>
#include<iomanip>
using namespace std;
const double PI = 3.1415926;
int main()
{
	double r, h,v;
	cout << "请输入圆锥的半径：" << endl;
	cin >> r;
	cout << "请输入圆锥的高：" << endl;
	cin >> h;
	v = PI * r * r * h / 3;
	cout << "圆锥的体积为（保留两位小数）：" << fixed<<setprecision(2)<<v << endl;
	return 0;
}