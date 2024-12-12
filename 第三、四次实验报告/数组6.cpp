#include <iostream>
using namespace std;

void count(const char s[], int counts[]) {
    // ��ʼ�� counts ����
    for (int i = 0; i < 26; i++) {
        counts[i] = 0;
    }

    // �����ַ�����ͳ����ĸ���ִ���
    for (int i = 0; s[i] != '\0'; i++) {
        char ch = s[i];
        if (ch >= 'a' && ch <= 'z') {
            counts[ch - 'a']++; // Сд��ĸ
        }
        else if (ch >= 'A' && ch <= 'Z') {
            counts[ch - 'A']++; // ��д��ĸ
        }
    }
}

int main() {
    const int SIZE = 26; // ��ĸ���С
    int counts[SIZE];
    char input[100];
    cout << "Enter a string: ";
    cin.getline(input, 100);//�����ַ�����
    count(input, counts);
    // ������
    for (int i = 0; i < SIZE; i++) {
        if (counts[i] > 0) {
            cout << static_cast<char>('a' + i) << ": " << counts[i] <<" times" << endl;
        }
    }

    return 0;
}
