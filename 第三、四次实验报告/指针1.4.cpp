//当前程序不能保证 p[0] 输出 1 和 p[1] 输出 2。
//这是因为数组 list 是一个局部变量，当函数 f 返回时，list 的内存被释放，指针 p 指向的地址变为无效地址
#include <iostream>
using namespace std;
int* f()
{
    // 使用 new 动态分配数组
    int* list = new int[4];
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;
    return list;
}
int main()
{
    int* p = f();
    cout << p[0] << endl; 
    cout << p[1] << endl; 
    delete[] p; // 释放动态分配的内存
    return 0;
}
