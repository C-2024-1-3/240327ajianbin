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
	cout << "请输入a的值" << endl;
	cin >> a;
	cout << "请输入b的值" << endl;
	cin >> b;
	int zuidagongyueshu, zuixiaogongbeishu;
	hanshu(a, b, zuidagongyueshu, zuixiaogongbeishu);
	cout << "最大公约数是：" << zuidagongyueshu << endl;
	cout << "最小公倍数是：" << zuixiaogongbeishu << endl;
}
	

