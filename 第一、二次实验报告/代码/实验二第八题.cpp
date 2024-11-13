#include<iostream>
using namespace std;
int main() {
	double a;
	cout << "请输入a的值：" << endl;
	cin >> a;
	if (a >= 0) {
		double xn = a;
		double xn1;
		do {
			xn1 = (xn + a / xn) / 2;

			if (fabs(xn1 - xn) < 1e-5) {//若想要更高精确值，则更改此代码取值即可
				break;
			}
			else xn = xn1;
		} while (true);
		cout << "a的平方根为：" << xn1 << endl;
	}
	else {//处理负数情况
		double b = -a;
		double xn = b;
		double xn1;
		do {
			xn1 = (xn + b / xn) / 2;

			if (fabs(xn1 - xn) < 1e-5) {
				break;
			}
			else xn = xn1;
		} while (true);
		cout << "a的平方根为：" << xn1 << endl;
		}
	return 0;
}
	