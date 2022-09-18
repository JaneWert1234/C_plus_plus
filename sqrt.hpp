#include <iostream>
using namespace std;
// функция вычисляющая корень числа

double sqrt(double value) {
    double eps = 1e-12;
    double height = 1, width = value;
    while(abs(width - height) > eps) {
      height = (height+width) / 2;
      width = value / height;
    }
    return width;
 }