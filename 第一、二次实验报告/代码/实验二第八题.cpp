#include<iostream>
using namespace std;
int main() {
	double a;
	cout << "������a��ֵ��" << endl;
	cin >> a;
	if (a >= 0) {
		double xn = a;
		double xn1;
		do {
			xn1 = (xn + a / xn) / 2;

			if (fabs(xn1 - xn) < 1e-5) {//����Ҫ���߾�ȷֵ������Ĵ˴���ȡֵ����
				break;
			}
			else xn = xn1;
		} while (true);
		cout << "a��ƽ����Ϊ��" << xn1 << endl;
	}
	else {//���������
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
		cout << "a��ƽ����Ϊ��" << xn1 << endl;
		}
	return 0;
}
	