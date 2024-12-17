#include <iostream>
using namespace std;
class Point {
private:
    int x, y;
public:
    // 构造函数，用于初始化坐标值
    Point() {
        x = 60;
        y = 80;
    }
    void change(int i, int j) {
        x = 60 + i;
        y = 80 + j;
    }
    void display(){
        cout << "坐标为: (" << x << ", " << y << ")" << endl;
    }
};
int main() {
    Point p;
    cout << "初始坐标:" << endl;
    p.display();
    p.change(10, 20);
    cout << "修改后的坐标:" << endl;
    p.display();
}
