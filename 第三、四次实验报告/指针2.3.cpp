#include <iostream>
using namespace std;
void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                // 交换元素
                int temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int size;
    cout << "请输入数组元素个数: ";
    cin >> size;
    // 动态分配数组内存
    int* arr = new int[size];
    cout << "请输入数组元素: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    sortArray(arr, size);
    // 使用指针输出数组元素
    cout << "排序后的数组元素是: ";
    for (int i = 0; i < size; i++) {
        cout << *(arr + i) << " ";
    }
    cout << endl;
    // 释放动态分配的内存
    delete[] arr;

    return 0;
}