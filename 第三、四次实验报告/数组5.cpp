#include <iostream>
using namespace std;
// 计算字符串长度
int stringLength(const char str[]) {
    int length = 0;
    while (str[length] != '\0') {
        length++;
    }
    return length;
}
int indexOf(const char s1[], const char s2[]) {
    int len1 = stringLength(s1);
    int len2 = stringLength(s2);
     // 若s1长度大于s2，不可能是子串
    if (len1 > len2) return -1;
    // 遍历s2，寻找s1
    for (int i = 0; i <= len2 - len1; i++) {//保证i不会跳出s1
        bool match = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {//i+j代表s2对s1的缩进距离
                match = false;
                break;
            }
        }
        if (match) return i; // 找到子串，返回给函数
    }
    return -1; // 未找到
}

int main() {
    const int MAX_SIZE = 100;
    char s1[MAX_SIZE], s2[MAX_SIZE];
    cout << "Enter the first string: ";
    cin.getline(s1, MAX_SIZE);
    cout << "Enter the second string: ";
    cin.getline(s2, MAX_SIZE);
    int result = indexOf(s1, s2);
    if (result != -1) {
        cout << "字符串" << s1 << "是字符串" << s2 << "的子串 " << endl;

    }
    else {
        cout << "字符串" << s1 << "不是字符串" << s2 << "的子串 " << endl;

    }

    return 0;
}
