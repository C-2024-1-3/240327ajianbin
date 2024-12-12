#include <iostream>
using namespace std;
bool is_prime(int num) {  // 定义判断素数的函数
    if (num < 2) {  // 小于 2 的数不是素数
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {  // 如果能被整除，不是素数
            return false;
        }
    }
    return true;  // 都不能整除，是素数
}
int main() {
    int count = 1;  // 用于计数找到的素数个数
    int num = 2;
    while (count < 201) {  // 直到找到 200 个素数
        if (is_prime(num)) {  // 如果是素数
            cout << num << " ";  // 输出素数
            if (count % 10 == 0) {  // 每 10 个素数换行
                cout << endl;
            }
            count++;  // 素数个数加 1
        }
        num++;  // 检查下一个数
    }

    return 0;
}
	