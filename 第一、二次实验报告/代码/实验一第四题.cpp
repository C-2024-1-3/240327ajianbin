#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//结果为-2是因为short有符号短整型，范围为-32768到32767，65534超出了这个范围，转换时溢出，导致结果为-2//
	unsigned int testUnint = 65534;
	cout << "output in unsigned int 1 type:"<<oct<< testUnint<< endl;
	return 0;
	//将实数转化为int时，会直接舍去小数部分，只保留整数部分//
}