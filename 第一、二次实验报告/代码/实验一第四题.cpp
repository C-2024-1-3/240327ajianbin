#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	//���Ϊ-2����Ϊshort�з��Ŷ����ͣ���ΧΪ-32768��32767��65534�����������Χ��ת��ʱ��������½��Ϊ-2//
	unsigned int testUnint = 65534;
	cout << "output in unsigned int 1 type:"<<oct<< testUnint<< endl;
	return 0;
	//��ʵ��ת��Ϊintʱ����ֱ����ȥС�����֣�ֻ������������//
}