#include <iostream>
using namespace std;
// �����ַ�������
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
     // ��s1���ȴ���s2�����������Ӵ�
    if (len1 > len2) return -1;
    // ����s2��Ѱ��s1
    for (int i = 0; i <= len2 - len1; i++) {//��֤i��������s1
        bool match = true;
        for (int j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {//i+j����s2��s1����������
                match = false;
                break;
            }
        }
        if (match) return i; // �ҵ��Ӵ������ظ�����
    }
    return -1; // δ�ҵ�
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
        cout << "�ַ���" << s1 << "���ַ���" << s2 << "���Ӵ� " << endl;

    }
    else {
        cout << "�ַ���" << s1 << "�����ַ���" << s2 << "���Ӵ� " << endl;

    }

    return 0;
}
