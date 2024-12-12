#include <iostream>
using namespace std;
bool is_prime(int num) {  // �����ж������ĺ���
    if (num < 2) {  // С�� 2 ������������
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {  // ����ܱ���������������
            return false;
        }
    }
    return true;  // ������������������
}
int main() {
    int count = 1;  // ���ڼ����ҵ�����������
    int num = 2;
    while (count < 201) {  // ֱ���ҵ� 200 ������
        if (is_prime(num)) {  // ���������
            cout << num << " ";  // �������
            if (count % 10 == 0) {  // ÿ 10 ����������
                cout << endl;
            }
            count++;  // ���������� 1
        }
        num++;  // �����һ����
    }

    return 0;
}
	