#include <iostream>
#include "Calculator.h"

using namespace std;
int main() {
       Calculator calc; //creating a calculator object

    // Testing the addition function 
    double sum;
    sum = calc.add(5.0, 3.0); 
    cout << "5 + 3 = " << sum << endl;

    // Testing the subtraction function using the same numbers
    double sub;
    sub = calc.subtract(5.0, 3.0);
    cout << "5 - 3 = " << sub << endl;

    // Testing the multiplication function using the same numbers 
    double multip;
    multip = calc.multiply(5.0, 3.0);
    cout << "5 * 3 = " << multip << endl;

    // Testing the division function using the same numbers
    double divi;
    divi = calc.divide(5.0, 2.0);
    cout << "5.0 / 2.0 = " << divi << endl;

    // Testing if the condition of division by zero works
    double divi2 = calc.divide(5.0, 0.0);
    cout << "5 / 0 = " << divi2 << endl;

    // Testing factorial 
    long long fact = calc.factorial(5);
    cout << "5! = " << fact << endl;

    // Test GCD and LCM
    int gcdResult = calc.gcd(56, 98);
    cout << "GCD of 56 and 98 is " << gcdResult << endl;

    int lcmResult = calc.lcm(56, 98);
    cout << "LCM of 56 and 98 is " << lcmResult << endl;

    // Test random function
    int randomNumber = calc.random(1, 100);
    cout << "Random number between 1 and 100: " << randomNumber << endl;
    return 0;
}
