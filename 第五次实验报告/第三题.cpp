#include<iostream>
using namespace std;
class changfangti {
private:
	double length, width, height;
public:
	void input() {
		cout << "�����볤����ĳ������ߣ�" << endl;
		cout << "�����볤����ĳ���" << endl;
		cin >> length;
		cout << "�����볤����Ŀ�" << endl;
		cin >> width;
		cout << "�����볤����ĸߣ�" << endl;
		cin >> height;
	}
	double tiji() {
		return length * width * height;
	}
	void output() {
		cout << "����������Ϊ��" << tiji() << endl;

	}
};
int main() {
	changfangti first, second, third;
	cout << "�������һ������������ݣ�" << endl;
	first.input();
	cout << "������ڶ�������������ݣ�" << endl;
	second.input();
	cout << "���������������������ݣ�" << endl;
	third.input();
	cout << "��һ������������Ϊ��" << endl;
	first.output();
	cout << "�ڶ�������������Ϊ��" << endl;
	second.output();
	cout << "����������������Ϊ��" << endl;
	third.output();
}