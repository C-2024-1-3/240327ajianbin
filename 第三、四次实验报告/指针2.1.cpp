#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    // 如果 s1 长度大于 s2，直接返回 -1
    if (len1 > len2) {
        return -1;
    }
    // 遍历 s2，查找 s1
    for (int i = 0; i <= len2 - len1; ++i) {
        bool match = true;
        for (int j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i; // 返回首次匹配的下标
        }
    }

    return -1; // 未找到匹配
}
int main() {
    char s1[100], s2[100];
    cout << "请输入字符串 s1: ";
    cin.getline(s1, 100);
    cout << "请输入字符串 s2: ";
    cin.getline(s2, 100);
    int result = indexof(s1, s2);
    if (result != -1) {
        cout  << s1 << " 是 " << s2 << " 的子串，首次出现的下标是: " << result << endl;
    }
    else {
        cout  << s1 << " 不是 " << s2 << " 的子串。" << endl;
    }
    return 0;
}
