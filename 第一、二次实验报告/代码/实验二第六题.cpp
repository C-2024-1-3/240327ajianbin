#include<iostream>
using namespace std;
int main()
{
	cout << "��������������" << endl;
	int a, b;
	int gongyueshu, gongbeishu;
	cin >> a >> b;
	for (int i = min(a,b);i>0;i--) {
		if (a % i == 0 && b % i == 0) {//ѭ����ֱ�����ֹ�Լ��
			gongyueshu = i;
			cout << "���Լ��Ϊ��" << gongyueshu << endl;
			gongbeishu = a * b / gongyueshu;//��С������=����֮���������Լ��
			cout << "��С������Ϊ��" << gongbeishu << endl;
			break;
		}
	}
	return 0;
}