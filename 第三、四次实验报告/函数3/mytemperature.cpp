#include"mytemperature.h"
double celsius_to_fah(double cel) {//摄氏度到华氏度
	return cel * 9.0 / 5.0 + 32.0;
}
double fahrenheit_to_cels(double fah) {//华氏度到摄氏度
	return(fah - 32.0) * 5.0 / 9.0;
}