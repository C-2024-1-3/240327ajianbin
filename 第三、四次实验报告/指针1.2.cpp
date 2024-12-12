#include<iostream>
using namespace std;
int main()   //C语言程序，要了解
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;    //将数组a首地址送给p
    for (i = 0;i < 3;i++)
        cout << "\n"<< a[i]<< p[i]<< *(p + i)<< *(a + i);
}