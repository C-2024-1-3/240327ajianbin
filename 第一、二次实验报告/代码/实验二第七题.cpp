#include <iostream>
using namespace std;
int main() {
    int i, j;
    for (i = 1; i <= 5; i++) {
        for (j = 1; j <= i;j++) {//第n行循环n次//
            cout << "*";
        }
        cout<<endl;
    }
    return 0;
}