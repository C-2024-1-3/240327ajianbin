#include<iostream>
#include"mytemperature.h"
using namespace std;
int main() {
        cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;
        double celsius_values[] = { 40.0, 39.0, 31.0 };
        double fahrenheit_values[] = { 105.0, 110.0, 30.0 };

        for (int i = 0; i < sizeof(celsius_values) / sizeof(celsius_values[0]); i++) {//iС������Ԫ�ظ���
            double celsius = celsius_values[i];
            double fahrenheit = celsius_to_fah(celsius);
            cout << celsius << "\t" << fahrenheit << "\t\t|";//���϶ȵ����϶�

            double fahrenheit_value = fahrenheit_values[i];
            double celsius_value = fahrenheit_to_cels(fahrenheit_value);
            cout << "\t" << fahrenheit_value << "\t\t" << celsius_value << endl;//���϶ȵ����϶�
        }

        return 0;
    }