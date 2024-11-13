#include<iostream>
using namespace std;
int main()
{
	cout << "请输入这两个数" << endl;
	int a, b;
	int gongyueshu, gongbeishu;
	cin >> a >> b;
	for (int i = min(a,b);i>0;i--) {
		if (a % i == 0 && b % i == 0) {//循环，直到出现公约数
			gongyueshu = i;
			cout << "最大公约数为：" << gongyueshu << endl;
			gongbeishu = a * b / gongyueshu;//最小公倍数=两数之积除以最大公约数
			cout << "最小公倍数为：" << gongbeishu << endl;
			break;
		}
	}
	return 0;
}