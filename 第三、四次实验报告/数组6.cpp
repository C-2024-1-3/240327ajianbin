#include <iostream>
using namespace std;

void count(const char s[], int counts[]) {
    // 初始化 counts 数组
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    // 遍历字符串并统计字母出现次数
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++; // 小写字母
        }
        else if (ch >= 'A' && ch <= 'Z') {
            counts[ch - 'A']++; // 大写字母
        }
    }
}

int main() {
    const int SIZE = 26; // 字母表大小
    int counts[SIZE];
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);//输入字符数组
    count(input, counts);
    // 输出结果
    for (int i = 0; i < SIZE; i++) {
        if (counts[i] > 0) {
            cout << static_cast<char>('a' + i) << ": " << counts[i] <<" times" << endl;
        }
    }

    return 0;
}
