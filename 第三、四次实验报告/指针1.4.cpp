//��ǰ�����ܱ�֤ p[0] ��� 1 �� p[1] ��� 2��
//������Ϊ���� list ��һ���ֲ������������� f ����ʱ��list ���ڴ汻�ͷţ�ָ�� p ָ��ĵ�ַ��Ϊ��Ч��ַ
#include <iostream>
using namespace std;
int* f()
{
    // ʹ�� new ��̬��������
    int* list = new int[4];
    list[0] = 1;
    list[1] = 2;
    list[2] = 3;
    list[3] = 4;
    return list;
}
int main()
{
    int* p = f();
    cout << p[0] << endl; 
    cout << p[1] << endl; 
    delete[] p; // �ͷŶ�̬������ڴ�
    return 0;
}
