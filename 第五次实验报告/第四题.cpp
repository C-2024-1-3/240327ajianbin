#include<iostream>
using namespace std;
class Student {
public:
	int id;
	float score;
	void max(Student* students, int n) {
		int maxNum = 0;
			for (int i = 0;i < n;i++) {
				if (students[i].score > students[maxNum].score) {
					maxNum = i;
				}
			}
			cout << "�ɼ�����ߵ�ѧ���ǣ�" << students[maxNum].id << endl;
	}
};
int main() {
	//��������
	Student students[5]{
		{101,100.0},
		{102,101.1},
		{103,99.2},
		{104,105.3},
		{105,66.4}
	};
	Student a;
	a.max(students, 5);
}