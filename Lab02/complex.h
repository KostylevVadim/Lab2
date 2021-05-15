#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cassert>
using namespace std;
class Complex {
public:
    double R, I;
    Complex() {
        R = 0;
        I = 0;
    }
    Complex(double R, double I) {
        this->I = I;
        this->R = R;
    }
    Complex(const Complex& x) {
        this->I = x.I;
        this->R = x.R;
    }
    Complex(int x) {
        this->I = 0;
        this->R = x;
    }
    Complex operator+(Complex x) {
        double a = x.I + this->I;
        double b = x.R + this->R;
        return Complex(b, a);
    }
    Complex operator-(Complex x) {
        double a = -x.I + this->I;
        double b = -x.R + this->R;
        return Complex(b, a);
    }
    Complex operator*(Complex x) {
        double a = this->R * x.R - this->I * x.I;
        double b = this->R * x.I + this->I * x.R;
        return Complex(a, b);
    }
    Complex operator*(double x) {
        return Complex(this->R * x, this->I * x);
    }
    Complex operator /(Complex x) {
        double a = (this->R * x.R + this->I * x.I) / (x.R * x.R + x.I * x.I);
        double b = (this->I * x.R - this->R * x.I) / (x.R * x.R + x.I * x.I);
        return Complex(a, b);
    }


    friend ostream& operator<<(ostream& out, Complex x) {
        out << x.R << " + " << x.I << "*i";
        return out;
    }
    friend istream& operator>>(istream& in, Complex& x) {
        in >> x.R >> x.I;
        return in;
    }
};