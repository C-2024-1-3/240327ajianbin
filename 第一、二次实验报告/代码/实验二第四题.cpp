#include<iostream>
using namespace std;
int main() {
	cout << "只有两个数的四则运算" << endl;
	double a, b,jieguo;
	string fuhao;//把符号初始化为特定字符串
	cout << "请输入第一个数" << endl;
	cin >> a;
	cout << "请输入运算符" << endl;
	cin >> fuhao;
	cout << "请输入第二个数" << endl;
	cin >> b;
	if (fuhao == "+") {
		jieguo = a + b;
	}
	else if (fuhao == "-") {
		jieguo = a - b;
	}
	else if (fuhao == "*") {
		jieguo = a * b;
	}
	else if (fuhao == "/"&&b!=0) {
		jieguo = a / b;
	}
	else {
		cout << "不符合要求" << endl;
	}
	cout << "结果为：" << jieguo << endl;
	return 0;
}