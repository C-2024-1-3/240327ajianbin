#include <iostream>
using namespace std;

int main() {
    int arr[10]; 
    int count = 0;  // 记录不同数的个数
    cout << "Enter ten numbers:" << endl;
    for (int i = 0; i < 10; i++) {  // 循环 10 次读取输入的数
        int num;
        cin >> num;
        bool new1 = true;  // 假设输入的数是新的
        for (int j = 0; j < count; j++) {
            if (arr[j] == num) { 
                new1 = false;  // 标记不是新数
                break;  
            }
        }
        if (new1) {  // 如果是新数
            arr[count] = num; 
            count++;// 存入数组，并增加计数
        }
    }
    cout << "The distinct numbers are:" << endl;
    for (int i = 0; i < count; i++) {  // 输出不同的数
        cout << arr[i] << " ";
    }

    return 0;
}