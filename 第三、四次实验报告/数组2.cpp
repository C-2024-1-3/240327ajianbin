#include<iostream>
using namespace std;

void bubblesort(double list[], int listSize) {//����ð�ݺ���
	bool changed = true;
	do {
		changed = false;
		for (int j = 0;j < listSize - 1;j++) {
			if (list[j] > list[j + 1]) {
				swap(list[j], list[j + 1]);//����
				changed = true;
			}
		}
	} while (changed);
}
int main() {
	double list[10];
	cout << "������һ��˫�������֣�" << endl;
	for (int i = 0;i < 10;i++) {
		cin>>list[i];
	}
	bubblesort(list, 10);
	cout << "����������Ϊ��" << endl;
	for (int i = 0; i < 10; i++) {
		cout << list[i] << " " << endl;
	}
	return 0;
}