#include <iostream>
using namespace std;
int main() {
    char a;
    int  zimu= 0, kongge = 0, shuzi = 0, qita = 0;  
    cout << "请输入一行字符：" << endl;
    cin >> a;
    while ((a = getchar()) != '\n') {  // 遇到回车换行符时停止循环
         if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {  // 判断是否为字母
            zimu++;
        }
        else if (a == ' ') {  // 判断是否为空格
            kongge++;
        }
        else if (a >= '0' && a <= '9') {  // 判断是否为数字
            shuzi++;
        }
        else {  // 以上都不是，则为其他字符
            qita++;
        }
        
    }

    cout << "字母的个数为：" << zimu << endl;
    cout << "空格的个数为：" << kongge << endl;
    cout << "数字的个数为：" << shuzi << endl;
    cout << "其他字符的个数为：" << qita << endl;

    
}