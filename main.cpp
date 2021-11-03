#include <iostream>
#include "fraction.h"

int main() {
    Fraction a(0,7);
    Fraction b(5,8);
    Fraction c = Fraction::multiplication(a,b);
    c.printFraction();
}
