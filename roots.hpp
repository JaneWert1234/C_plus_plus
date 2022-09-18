#include <iostream>
using namespace std;
// шаблон функции вычисляющий корни квадратного уравнения

template<typename T>
auto roots (T a, T b, T c) {
    T D = b*b - 4*a*c;
    if (a == 0 && b == 0 && c == 0) {
        cout << "уравнение имеет бесконечное множество решений";
    }
    else if (a == 0 && b == 0 && c != 0) {
        cout << "корней нет";
    }
    else if (a == 0 && b != 0) {
        cout << "x = " << - c / b;
    }
    else if (D == 0) {
        cout << "x = " << - b / (2*a);
    }
    else if (D > 0) {
        cout << "x1 = " << (-b + ::sqrt(D))/(2*a) << ", x2 = " << (-b + ::sqrt(D))/(2*a);
    }
    else if (D < 0) {
        cout << "x1 = " << -b/(2*a) << "+" << ::sqrt(-D) << "i , x2 = " << -b/(2*a) << "-" << ::sqrt(-D) << "i";
    }
    else {
        cout << "не верный ввод";
    }


}