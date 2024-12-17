#include<iostream>
using namespace std;
class changfangti {
private:
	double length, width, height;
public:
	void input() {
		cout << "请输入长方体的长、宽、高：" << endl;
		cout << "请输入长方体的长：" << endl;
		cin >> length;
		cout << "请输入长方体的宽：" << endl;
		cin >> width;
		cout << "请输入长方体的高：" << endl;
		cin >> height;
	}
	double tiji() {
		return length * width * height;
	}
	void output() {
		cout << "长方体的体积为：" << tiji() << endl;

	}
};
int main() {
	changfangti first, second, third;
	cout << "请输入第一个长方体的数据：" << endl;
	first.input();
	cout << "请输入第二个长方体的数据：" << endl;
	second.input();
	cout << "请输入第三个长方体的数据：" << endl;
	third.input();
	cout << "第一个长方体的体积为：" << endl;
	first.output();
	cout << "第二个长方体的体积为：" << endl;
	second.output();
	cout << "第三个长方体的体积为：" << endl;
	third.output();
}