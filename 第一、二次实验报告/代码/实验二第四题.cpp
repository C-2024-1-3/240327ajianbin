#include<iostream>
using namespace std;
int main() {
	cout << "ֻ������������������" << endl;
	double a, b,jieguo;
	string fuhao;//�ѷ��ų�ʼ��Ϊ�ض��ַ���
	cout << "�������һ����" << endl;
	cin >> a;
	cout << "�����������" << endl;
	cin >> fuhao;
	cout << "������ڶ�����" << endl;
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
		cout << "������Ҫ��" << endl;
	}
	cout << "���Ϊ��" << jieguo << endl;
	return 0;
}