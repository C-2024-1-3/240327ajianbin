#include <iostream>
using namespace std;
int main() {
    char a;//�����ַ�����
    cout << "������һ���ַ�: ";
    cin >> a;

    if (a >= 'a' && a <= 'z') {
        a -= 32;//��Сд��ĸת��Ϊ��д��Сд��ĸ���Ӧ�Ĵ�д��ĸ��ASCII�����32//
        cout << "�����ַ�ΪСд��ĸ�����д��ĸΪ��"<<a << endl;
    }
    else {
        cout <<"�����ַ�Ϊ��д��ĸ�����һλASCII����Ϊ��" <<int(a + 1) << endl;//������һλ��ASCII��//
    }

    return 0;
}