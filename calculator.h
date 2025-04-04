#ifndef CALCULATOR_H
#define CALCULATOR_H

class Calculator {
private:
    bool r; //for random number generator

public:
    Calculator(); //constructor
    double add(double a, double b) const;
    double subtract(double a, double b) const;
    double multiply(double a, double b) const;
    double divide(double a, double b) const;
    long long factorial(int n);
    int gcd(int a, int b) const;
    int lcm(int a, int b) const;
    int random(int min, int max);
};

#endif CALCULATOR_H

