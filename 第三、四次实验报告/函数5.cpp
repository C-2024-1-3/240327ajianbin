#include<iostream>
using namespace std;
int taozi(int num) {
	for (int i = 1;i < 10;i++) {//һ��ʮ�죬����9������
		num = (num + 1) * 2;
		
	}
	return num;
}
int main() {
	int num=taozi(1);//��ס�����ķ���ֵ
	cout <<"��һ������һ����" << num <<"��"<< endl;
}