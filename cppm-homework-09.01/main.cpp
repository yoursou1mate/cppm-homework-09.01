//
//  main.cpp
//  cppm-homework-09.01
//
//  Created by a1ex on 11/28/23.
//




#include <iostream>
#include <math.h>

class Fraction
{
private:
    int numerator_;
    int denominator_;

public:
    Fraction(int numerator, int denominator)
    {
        numerator_ = numerator;
        denominator_ = denominator;
    }
    
   Fraction operator+(Fraction other)
        { return Fraction(numerator_ + other.numerator_, denominator_ + other.denominator_); }
        Fraction operator+(int other) { return Fraction(numerator_ + other, denominator_); }
        Fraction operator-(Fraction other)
        { return Fraction(numerator_ - other.numerator_, denominator_ - other.denominator_); }
        Fraction operator-(int other) { return Fraction(numerator_ - other, denominator_); }
        void Print() { std::cout << numerator_ << (denominator_ < 0 ? "" : "+") << denominator_ << "i\n"; }
    
   
        bool operator==(Fraction other) { return numerator_ == other.numerator_ && other.denominator_ == denominator_; }
        bool operator!=(Fraction other) { return !(*this == other); }
        bool operator>(Fraction other) { return numerator_ * other.denominator_ > other.numerator_ * denominator_; }
        bool operator<(Fraction other) { return other > *this; }
        bool operator>=(Fraction other) { return !(*this < other); }
        bool operator<=(Fraction other) { return !(*this > other); }
};

int main()
{
    Fraction f1(4, 3);
    Fraction f2(6, 11);

    std::cout << "f1" << ((f1 == f2) ? " == " : " not == ") << "f2" << '\n';
    std::cout << "f1" << ((f1 != f2) ? " != " : " not != ") << "f2" << '\n';
    std::cout << "f1" << ((f1 < f2) ? " < " : " not < ") << "f2" << '\n';
    std::cout << "f1" << ((f1 > f2) ? " > " : " not > ") << "f2" << '\n';
    std::cout << "f1" << ((f1 <= f2) ? " <= " : " not <= ") << "f2" << '\n';
    std::cout << "f1" << ((f1 >= f2) ? " >= " : " not >= ") << "f2" << '\n';
    return 0;
}


