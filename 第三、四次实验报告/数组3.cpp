#include <iostream>
using namespace std;
int main() {
    bool lockers[100] = { false }; // 初始化所有储物柜为关闭状态
    // 模拟学生操作储物柜
    for (int student = 1; student <= 100; student++) {
        for (int locker = student - 1; locker < 100; locker += student) {
            lockers[locker] = !lockers[locker];//切换状态
        }
    }
    cout << "打开的储物柜编号是：";
    for (int i = 0; i < 100; i++) {
        if (lockers[i]) {
            cout << (i + 1) << " ";
        }
    }
    cout << endl;
    return 0;
}