#include <iostream>
#include <cstdlib>  // for rand, srand
#include <ctime>    // for time
#include <cmath>    // for abs
#include "calculator.h"
using namespace std;

Calculator::Calculator() : r(false) {}
double Calculator::add(double a, double b) const {return a + b;}
double Calculator::subtract(double a, double b) const {return a - b;}
double Calculator::multiply(double a, double b) const {return a * b;}


double Calculator::divide(double a, double b) const {
    if (b == 0) {
       cout << "Division by zero is not allowed" << endl;
       return 1;
    }
    return a / b;
}
long long Calculator::factorial(int n) {
    if (n < 0) {
        cout << "Number can't be negative" << endl;
        return 1;
    }
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}
int Calculator::gcd(int a, int b) const {

    a = abs(a);
    b = abs(b);
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}
int Calculator::lcm(int a, int b) const {

    a = abs(a);
    b = abs(b);
    // If one of the inputs is 0
    if (a == 0 || b == 0) {
        return 0;
    }
    // LCM is (a * b) / gcd(a, b)
    return ((a * b) / gcd(a, b));
}
int Calculator::random(int min, int max) {
    if (min > max) {
        cout << "Minimum value must be less than max value" << endl;
        return 1;
    }
    if (!r) {
        srand(time(0));
        r = true;
    }
    // Generate random number within range
    return min + rand() % (max - min + 1);
}

