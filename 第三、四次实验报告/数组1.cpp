#include <iostream>
using namespace std;

int main() {
    int arr[10]; 
    int count = 0;  // ��¼��ͬ���ĸ���
    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < 10; i++) {  // ѭ�� 10 �ζ�ȡ�������
        int num;
        cin >> num;
        bool new1 = true;  // ��������������µ�
        for (int j = 0; j < count; j++) {
            if (arr[j] == num) { 
                new1 = false;  // ��ǲ�������
                break;  
            }
        }
        if (new1) {  // ���������
            arr[count] = num; 
            count++;// �������飬�����Ӽ���
        }
    }
    cout << "The distinct numbers are:" << endl;
    for (int i = 0; i < count; i++) {  // �����ͬ����
        cout << arr[i] << " ";
    }

    return 0;
}