#include<iostream>
using namespace std;
int gongyueshu1(int a, int b) {
	int min = (a < b) ? a : b;
	for (int i = min;i >= 1;i--) {
		if (a % i == 0 && b % i == 0) {
			return i;
		}
	}
}
void hanshu(int a, int b,int&gongyueshu,int&gongbeishu) {
	gongyueshu = gongyueshu1(a, b);
	gongbeishu = a * b / gongyueshu;
}
int main() {
	int a, b;
	cout << "������a��ֵ" << endl;
	cin >> a;
	cout << "������b��ֵ" << endl;
	cin >> b;
	int zuidagongyueshu, zuixiaogongbeishu;
	hanshu(a, b, zuidagongyueshu, zuixiaogongbeishu);
	cout << "���Լ���ǣ�" << zuidagongyueshu << endl;
	cout << "��С�������ǣ�" << zuixiaogongbeishu << endl;
}
	

