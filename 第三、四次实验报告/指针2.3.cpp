#include <iostream>
using namespace std;
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                // ����Ԫ��
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int size;
    cout << "����������Ԫ�ظ���: ";
    cin >> size;
    // ��̬���������ڴ�
    int* arr = new int[size];
    cout << "����������Ԫ��: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sortArray(arr, size);
    // ʹ��ָ���������Ԫ��
    cout << "����������Ԫ����: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    // �ͷŶ�̬������ڴ�
    delete[] arr;

    return 0;
}