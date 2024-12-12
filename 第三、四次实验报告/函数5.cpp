#include<iostream>
using namespace std;
int taozi(int num) {
	for (int i = 1;i < 10;i++) {//一共十天，吃了9次桃子
		num = (num + 1) * 2;
		
	}
	return num;
}
int main() {
	int num=taozi(1);//接住函数的返回值
	cout <<"第一天桃子一共有" << num <<"个"<< endl;
}