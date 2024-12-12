#include<iostream>
using namespace std;

void bubblesort(double list[], int listSize) {//定义冒泡函数
	bool changed = true;
	do {
		changed = false;
		for (int j = 0;j < listSize - 1;j++) {
			if (list[j] > list[j + 1]) {
				swap(list[j], list[j + 1]);//交换
				changed = true;
			}
		}
	} while (changed);
}
int main() {
	double list[10];
	cout << "请输入一个双精度数字：" << endl;
	for (int i = 0;i < 10;i++) {
		cin>>list[i];
	}
	bubblesort(list, 10);
	cout << "排序后的数字为：" << endl;
	for (int i = 0; i < 10; i++) {
		cout << list[i] << " " << endl;
	}
	return 0;
}