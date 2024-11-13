#include<iostream>
using namespace std;
int main() {
	int day = 0, num = 2;
	do {
		day++;
		num = num*2;
	} while (num <= 100);
	num = num / 2;
	double Num=2*(1 - pow(2, day)) *0.8/ (1 - 2)/day;//等比数列前n项和//
		cout << Num << endl;
}