#include <iostream>
using namespace std;
int parseHex(const char* const hexString) {
    int decimalism = 0;
    for (int i = 0; hexString[i] != '\0'; i++) {//��ֹ������ʿ�ָ��
        char hexadecimal; 
        if (hexadecimal>= '0' && hexadecimal <= '9') {
            decimalism = decimalism * 16 + (hexadecimal - '0');
        }
        else if (hexadecimal >= 'A' && hexadecimal <= 'F') {
            decimalism = decimalism * 16 + (hexadecimal - 'A' + 10);
        }
        else {
            cout << "����" << endl;
            return -1; // ����ֵ��ʾ����
        }
    }

    return decimalism;
}

int main() {
    // ��������
    const char* test1 = "A5";
    cout << "���ú���paeseHex( " << test1 << " )���� " << parseHex(test1) << endl;
    return 0;
}