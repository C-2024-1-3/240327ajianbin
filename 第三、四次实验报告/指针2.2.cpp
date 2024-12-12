#include <iostream>
using namespace std;
int parseHex(const char* const hexString) {
    int decimalism = 0;
    for (int i = 0; hexString[i] != '\0'; i++) {//·ÀÖ¹´íÎó·ÃÎÊ¿ÕÖ¸Õë
        char hexadecimal; 
        if (hexadecimal>= '0' && hexadecimal <= '9') {
            decimalism = decimalism * 16 + (hexadecimal - '0');
        }
        else if (hexadecimal >= 'A' && hexadecimal <= 'F') {
            decimalism = decimalism * 16 + (hexadecimal - 'A' + 10);
        }
        else {
            cout << "´íÎó" << endl;
            return -1; // ÌØÊâÖµ±íÊ¾´íÎó
        }
    }

    return decimalism;
}

int main() {
    // ²âÊÔÓÃÀý
    const char* test1 = "A5";
    cout << "µ÷ÓÃº¯ÊýpaeseHex( " << test1 << " )·µ»Ø " << parseHex(test1) << endl;
    return 0;
}