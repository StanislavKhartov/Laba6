#include "gtest/gtest.h"
#include "fraction.h"

TEST(Fraction, null){
    EXPECT_ANY_THROW(Fraction a(1,0));
}

TEST(Fraction, getValue1) {
    Fraction a(1, 2);
    ASSERT_EQ(1, a.getNumerator());
}

TEST(Fraction, getValue2) {
    Fraction a(-1, 2);
    ASSERT_EQ(-1, a.getNumerator());
}

TEST(Fraction, getValue3) {
    Fraction a(0, 2);
    ASSERT_EQ(0, a.getNumerator());
}

TEST(Fraction, getValue4) {
    Fraction a(1, 2);
    ASSERT_EQ(2, a.getDenominator());
}

TEST(Fraction, getValue5) {
    Fraction a(1, -2);
    ASSERT_EQ(2, a.getDenominator());
}

TEST(GCD, test1) {
    ASSERT_EQ(4, Fraction::GCD(4, 8));
}

TEST(GCD, test2) {
    ASSERT_EQ(1, Fraction::GCD(4, 4839279));
}

TEST(GCD, test3) {
    ASSERT_EQ(4, abs(Fraction::GCD(-4, 8)));
}

TEST(GCD, test4) {
    ASSERT_EQ(9, abs(Fraction::GCD(-9, 81)));
}

TEST(Fraction, reduction1) {
    Fraction a(2, 4);
    ASSERT_EQ(2, a.getDenominator());
    ASSERT_EQ(1, a.getNumerator());
}

TEST(Fraction, reduction2) {
    Fraction a(124, 4);
    ASSERT_EQ(1, a.getDenominator());
    ASSERT_EQ(31, a.getNumerator());
}

TEST(Fraction, reduction3) {
    Fraction a(2, -4);
    ASSERT_EQ(2, a.getDenominator());
    ASSERT_EQ(-1, a.getNumerator());
}

TEST(Fraction, add1){
    Fraction a(1,2);
    Fraction b(3,2);
    Fraction c=Fraction::addFractions(a,b);
    ASSERT_EQ(1, c.getDenominator());
    ASSERT_EQ(2, c.getNumerator());
}

TEST(Fraction, add2){
    Fraction a(1,2);
    Fraction b(-3,2);
    Fraction c=Fraction::addFractions(a,b);
    ASSERT_EQ(1, c.getDenominator());
    ASSERT_EQ(-1, c.getNumerator());
}

TEST(Fraction, add3){
    Fraction a(1,15);
    Fraction b(3,5);
    Fraction c=Fraction::addFractions(a,b);
    ASSERT_EQ(3, c.getDenominator());
    ASSERT_EQ(2, c.getNumerator());
}

TEST(Fraction, add4){
    Fraction a(1,2);
    Fraction b(3,7);
    Fraction c=Fraction::addFractions(a,b);
    ASSERT_EQ(14, c.getDenominator());
    ASSERT_EQ(13, c.getNumerator());
}

TEST(Fraction, multiplication1){
    Fraction a(1,2);
    Fraction b(2,1);
    Fraction c=Fraction::multiplication(a,b);
    ASSERT_EQ(1, c.getDenominator());
    ASSERT_EQ(1, c.getNumerator());
}

TEST(Fraction, multiplication2){
    Fraction a(1,2);
    Fraction b(3,7);
    Fraction c=Fraction::multiplication(a,b);
    ASSERT_EQ(14, c.getDenominator());
    ASSERT_EQ(3, c.getNumerator());
}

TEST(Fraction, multiplication3){
    Fraction a(0,2);
    Fraction b(3,7);
    Fraction c=Fraction::multiplication(a,b);
    ASSERT_EQ(1, c.getDenominator());
    ASSERT_EQ(0, c.getNumerator());
}

TEST(Fraction, division1){
    Fraction a(3,7);
    Fraction b(3,7);
    Fraction c=Fraction::division(a,b);
    ASSERT_EQ(1, c.getDenominator());
    ASSERT_EQ(1, c.getNumerator());
}

TEST(Fraction, division2){
    Fraction a(7,3);
    Fraction b(3,7);
    Fraction c=Fraction::division(a,b);
    ASSERT_EQ(9, c.getDenominator());
    ASSERT_EQ(49, c.getNumerator());
}

TEST(Fraction, division3){
    Fraction a(0,7);
    Fraction b(3,7);
    Fraction c=Fraction::division(a,b);
    ASSERT_EQ(1, c.getDenominator());
    ASSERT_EQ(0, c.getNumerator());
}