#include <iostream>
#include "sqrt.hpp"
using namespace std;
// шаблон функции вычисляющий корни квадратного уравнения

template<typename T>
auto roots (T a, T b, T c) {
    T D = b*b - 4*a*c;
    if (a == 0 && b == 0 && c == 0) {
        cout << "уравнение имеет бесконечное множество решений" << '\n';
    }
    else if (a == 0 && b == 0 && c != 0) {
        cout << "корней нет" << '\n';
    }
    else if (a == 0 && b != 0) {
        cout << "x = " << - c / b << '\n';
    }
    else if (D == 0) {
        cout << "x = " << - b / (2*a) << '\n';
    }
    else if (D > 0) {
        cout << "x1 = " << (-b + ::sqrt(D))/(2*a) << ", x2 = " << (-b + ::sqrt(D))/(2*a) << '\n';
    }
    else if (D < 0) {
        cout << "x1 = " << -b/(2*a) << "+" << ::sqrt(-D) << "i , x2 = " << -b/(2*a) << "-" << ::sqrt(-D) << "i" << '\n';
    }
    else {
        cout << "не верный ввод" << '\n';
    }


}
