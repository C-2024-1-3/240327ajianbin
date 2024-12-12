#include <iostream>
using namespace std;
int indexof(const char* s1, const char* s2) {
    int len1 = strlen(s1);
    int len2 = strlen(s2);
    // ��� s1 ���ȴ��� s2��ֱ�ӷ��� -1
    if (len1 > len2) {
        return -1;
    }
    // ���� s2������ s1
    for (int i = 0; i <= len2 - len1; ++i) {
        bool match = true;
        for (int j = 0; j < len1; ++j) {
            if (s2[i + j] != s1[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return i; // �����״�ƥ����±�
        }
    }

    return -1; // δ�ҵ�ƥ��
}
int main() {
    char s1[100], s2[100];
    cout << "�������ַ��� s1: ";
    cin.getline(s1, 100);
    cout << "�������ַ��� s2: ";
    cin.getline(s2, 100);
    int result = indexof(s1, s2);
    if (result != -1) {
        cout  << s1 << " �� " << s2 << " ���Ӵ����״γ��ֵ��±���: " << result << endl;
    }
    else {
        cout  << s1 << " ���� " << s2 << " ���Ӵ���" << endl;
    }
    return 0;
}
