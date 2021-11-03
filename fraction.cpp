#include <iostream>
#include "fraction.h"

int Fraction::GCD(int a, int b) {
    while (b) {
        a %= b;
        std::swap(a, b);
    }
    return a;
}

int Fraction::getNumerator() const {
    return numerator;
}

int Fraction::getDenominator() const {
    return denominator;
}

void Fraction::reduction() {
    int gcd = GCD(getNumerator(), getDenominator());
    numerator = numerator / gcd;
    denominator = denominator / gcd;
}

Fraction Fraction::addFractions(const Fraction &firstFraction, const Fraction &secondFraction) {
    int numerator = firstFraction.getNumerator() * secondFraction.getDenominator() +
                    secondFraction.getNumerator() * firstFraction.getDenominator();
    int denominator = firstFraction.getDenominator() * secondFraction.getDenominator();
    Fraction answer(numerator, denominator);
    answer.reduction();
    return answer;
}

Fraction Fraction::multiplication(const Fraction &firstFraction, const Fraction &secondFraction) {
    int numerator = firstFraction.getNumerator() * secondFraction.getNumerator();
    int denominator = firstFraction.getDenominator() * secondFraction.getDenominator();
    Fraction answer(numerator, denominator);
    answer.reduction();
    return answer;
}

Fraction Fraction::division(const Fraction &firstFraction, const Fraction &secondFraction){
    int numerator = firstFraction.getNumerator()*secondFraction.getDenominator();
    int denominator = firstFraction.getDenominator()* secondFraction.getNumerator();
    Fraction answer(numerator, denominator);
    answer.reduction();
    return answer;
}

void Fraction::printFraction() {
    std::cout << getNumerator() << "/" << getDenominator() << "\n";
}
