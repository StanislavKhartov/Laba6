#ifndef LABA6_FRACTION_H
#define LABA6_FRACTION_H

#include<stdexcept>

class Fraction {
public:
    Fraction(int a, int b) {
        if(b == 0){
            throw std:: logic_error("division on null");
        }
        int gcd = GCD(a, b);
        numerator = a / gcd;
        denominator = b / gcd;
        if (denominator < 0) {
            numerator = -1 * numerator;
            denominator = -1 * denominator;
        }
    }

    Fraction(const Fraction &old) {
        numerator = old.numerator;
        denominator = old.denominator;
    }

    ~Fraction() = default;

    int getNumerator() const;

    int getDenominator() const;

    void reduction();

    static int GCD(int a, int b);

    static Fraction addFractions(const Fraction &firstFraction, const Fraction &secondFraction);

    static Fraction multiplication(const Fraction &firstFraction, const Fraction &secondFraction);

    static Fraction division(const Fraction &firstFraction, const Fraction &secondFraction);

    void printFraction();

private:
    int numerator;
    int denominator;
};

#endif //LABA6_FRACTION_H
