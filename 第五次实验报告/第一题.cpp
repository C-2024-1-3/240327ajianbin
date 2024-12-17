#include<iostream>
using namespace std;
class Time             // 定义Time类
{
private:              // 数据成员为公用的
	int hour;
	int minute;
	int sec;
public:
	void inputTime() {
		cin >> hour;
		cin >> minute;
		cin >> sec;
	}
	void outputTime() {
		cout << hour << ":" << minute << ":" << sec << endl;
	}
};
int main()
{
	Time t1;
	t1.inputTime();
	t1.outputTime();
	return 0;
}
/*被外部调用的成员应设置为公有；只代表内部状态，不希望被随意访问的成员应设置为私有
较简单且成员关联性强的函数应在内部定义，较复杂的函数应在外部定义*/