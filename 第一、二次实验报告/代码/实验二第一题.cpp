#include <iostream>
using namespace std;
int main() {
    char a;//定义字符变量
    cout << "请输入一个字符: ";
    cin >> a;

    if (a >= 'a' && a <= 'z') {
        a -= 32;//将小写字母转换为大写，小写字母与对应的大写字母的ASCII码相差32//
        cout << "输入字符为小写字母，其大写字母为；"<<a << endl;
    }
    else {
        cout <<"输入字符为大写字母，其后一位ASCII代码为：" <<int(a + 1) << endl;//输出其后一位的ASCII码//
    }

    return 0;
}