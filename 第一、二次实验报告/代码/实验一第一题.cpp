#include<iostream>
using namespace std;
int main()
{
	int i = k + 1;             //未定义标识符“k”
	cout << i++ << endl;
	int i = 1;                 //重定义i
	cout << i++ << endl;       //无有意义的左值
	cout << "Welcome to C++" << endl;
	return 0;
}