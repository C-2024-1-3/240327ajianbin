#include <iostream>
using namespace std;
int main() {
    bool lockers[100] = { false }; // ��ʼ�����д����Ϊ�ر�״̬
    // ģ��ѧ�����������
    for (int student = 1; student <= 100; student++) {
        for (int locker = student - 1; locker < 100; locker += student) {
            lockers[locker] = !lockers[locker];//�л�״̬
        }
    }
    cout << "�򿪵Ĵ�������ǣ�";
    for (int i = 0; i < 100; i++) {
        if (lockers[i]) {
            cout << (i + 1) << " ";
        }
    }
    cout << endl;
    return 0;
}