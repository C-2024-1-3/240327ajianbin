#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    // ���캯�������ڳ�ʼ������ֵ
    Point() {
        x = 60;
        y = 80;
    }
    void change(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display(){
        cout << "����Ϊ: (" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Point p;
    cout << "��ʼ����:" << endl;
    p.display();
    p.change(10, 20);
    cout << "�޸ĺ������:" << endl;
    p.display();
}
