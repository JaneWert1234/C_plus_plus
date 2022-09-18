#include <iostream>
using namespace std;
#include "sqrt.hpp"
#include "roots.hpp"

int main()
{
    // уравнение 0 = 0 (бесконечное множество решений)
    ::roots(0, 0, 0);
    // уравнение 5 = 0 (нет решений)
    ::roots(0, 0, 5);
    // уравнение 2*x+5 = 0 
    ::roots(0, 2, 5);
    // уравнение x^2+2*x+1 = 0
    ::roots(1, 2, 1);
    // уравнение x^2+2*x-3 = 0 
    ::roots(1, 2, -3);
    // уравнение x^2+2*x+5 = 0
    ::roots(1, 2, 5);
    return 0;
}
