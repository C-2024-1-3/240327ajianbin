#include <iostream>
using namespace std;
int main() {
    char a;
    int  zimu= 0, kongge = 0, shuzi = 0, qita = 0;  
    cout << "������һ���ַ���" << endl;
    cin >> a;
    while ((a = getchar()) != '\n') {  // �����س����з�ʱֹͣѭ��
         if((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')) {  // �ж��Ƿ�Ϊ��ĸ
            zimu++;
        }
        else if (a == ' ') {  // �ж��Ƿ�Ϊ�ո�
            kongge++;
        }
        else if (a >= '0' && a <= '9') {  // �ж��Ƿ�Ϊ����
            shuzi++;
        }
        else {  // ���϶����ǣ���Ϊ�����ַ�
            qita++;
        }
        
    }

    cout << "��ĸ�ĸ���Ϊ��" << zimu << endl;
    cout << "�ո�ĸ���Ϊ��" << kongge << endl;
    cout << "���ֵĸ���Ϊ��" << shuzi << endl;
    cout << "�����ַ��ĸ���Ϊ��" << qita << endl;

    
}