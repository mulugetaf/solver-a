#include <iostream>
#include <complex>
#include <stdbool.h>

using namespace std;
namespace solver
{
/*
    class RealVariable
    x1 ,x2 result of square equation
 */
class RealVariable
{
public:
    double x1, x2;
    //constructor
    RealVariable(double data);
    RealVariable();
    /* 
        overload operator  == , <= ,>=
                        + , - , * , / , ^ 
        from right and left side
    */
    friend double operator==(const RealVariable &d, double x);
    friend double operator==(double x, const RealVariable &d);
    friend double operator==(const RealVariable &d, int x);
    friend double operator==(int x, const RealVariable &d);
    friend double operator==(const RealVariable &r, const RealVariable &d);
    /*  overload Inequalities <=
             throw exception
            */
    friend double operator<=(const RealVariable &d, double x);
    friend double operator<=(double x, const RealVariable &d);
    friend double operator<=(const RealVariable &d, int x);
    friend double operator<=(int x, const RealVariable &d);
    friend double operator<=(const RealVariable &r, const RealVariable &d);
    /*  overload Inequalities >=
             throw exception
            */
    friend double operator>=(const RealVariable &d, double x);
    friend double operator>=(double x, const RealVariable &d);
    friend double operator>=(const RealVariable &d, int x);
    friend double operator>=(int x, const RealVariable &d);
    friend double operator>=(const RealVariable &r, const RealVariable &d);
    /*  overload  
                RealVariable  <+,-,*,/,^> int
              */
    friend RealVariable operator+(const RealVariable &r, int x);
    friend RealVariable operator-(const RealVariable &r, int x);
    friend RealVariable operator*(const RealVariable &r, int x);
    friend RealVariable operator/(const RealVariable &r, int x);
    friend RealVariable operator^(const RealVariable &r, int x);
    /*  overload  
                int  <+,-,*,/,^> RealVariable
              */
    friend RealVariable operator+(int x, const RealVariable &r);
    friend RealVariable operator-(int x, const RealVariable &r);
    friend RealVariable operator*(int x, const RealVariable &r);
    friend RealVariable operator/(int x, const RealVariable &r);
    friend RealVariable operator^(int x, const RealVariable &r);

    /*  overload  
                RealVariable <+,-,*,/,^> RealVariable
              */
    friend RealVariable operator+(const RealVariable &r, const RealVariable &t);
    friend RealVariable operator-(const RealVariable &r, const RealVariable &t);
    friend RealVariable operator*(const RealVariable &r, const RealVariable &t);
    friend RealVariable operator/(const RealVariable &r, const RealVariable &t);
    friend RealVariable operator^(const RealVariable &r, const RealVariable &t);

    /*  overload  
                RealVariable <+,-,*,/,^>complex<double>
              */
    friend RealVariable operator+(const RealVariable &r, std::complex<double> t);
    friend RealVariable operator+(std::complex<double> &t, const RealVariable r);
};

/*
    class ComplexVariable
    ans result of square equation(complex).
    ans : (real , imag).
    real:  real part of the complex number.
    imag:  imaginary part of the complex number.
 */
class ComplexVariable
{
public:
    std::complex<double> ans;
    //constructor
    ComplexVariable(double r, double i);
    ComplexVariable(double r);
    ComplexVariable();
    /* 
        overload operator  == , <= ,>=
                        + , - , * , / , ^ 
        from right and left side
    */
    friend std::complex<double> operator==(const ComplexVariable &d, double x);
    friend std::complex<double> operator==(double x, const ComplexVariable &d);
    friend std::complex<double> operator==(const ComplexVariable &d, int x);
    friend std::complex<double> operator==(int x, const ComplexVariable &d);
    friend std::complex<double> operator==(std::complex<double> &t, int x);
    friend std::complex<double> operator==(const ComplexVariable d, const ComplexVariable s);
    /*  overload Inequalities <=
             throw exception
            */
    friend std::complex<double> operator<=(const ComplexVariable &d, double x);
    friend std::complex<double> operator<=(double x, const ComplexVariable &d);
    friend std::complex<double> operator<=(const ComplexVariable &d, int x);
    friend std::complex<double> operator<=(int x, const ComplexVariable &d);
    friend std::complex<double> operator<=(std::complex<double> &t, int x);
    friend std::complex<double> operator<=(const ComplexVariable d, const ComplexVariable s);
    /*  overload Inequalities >=
             throw exception
            */
    friend std::complex<double> operator>=(const ComplexVariable &d, double x);
    friend std::complex<double> operator>=(double x, const ComplexVariable &d);
    friend std::complex<double> operator>=(const ComplexVariable &d, int x);
    friend std::complex<double> operator>=(int x, const ComplexVariable &d);
    friend std::complex<double> operator>=(std::complex<double> &t, int x);
    friend std::complex<double> operator>=(const ComplexVariable d, const ComplexVariable s);
    /*  overload  
                ComplexVariable  <+,-,*,/,^> int
              */
    friend ComplexVariable operator+(const ComplexVariable &r, int x);
    friend ComplexVariable operator-(const ComplexVariable &r, int x);
    friend ComplexVariable operator*(const ComplexVariable &r, int x);
    friend ComplexVariable operator/(const ComplexVariable &r, int x);
    friend ComplexVariable operator^(const ComplexVariable &r, int x);
    /*  overload  
                int  <+,-,*,/,^> ComplexVariable
              */
    friend ComplexVariable operator+(int x, const ComplexVariable &r);
    friend ComplexVariable operator-(int x, const ComplexVariable &r);
    friend ComplexVariable operator*(int x, const ComplexVariable &r);
    friend ComplexVariable operator/(int x, const ComplexVariable &r);
    friend ComplexVariable operator^(int x, const ComplexVariable &r);

    /*  overload  
                ComplexVariable <+,-,*,/,^> ComplexVariable
              */
    friend ComplexVariable operator+(const ComplexVariable &r, const ComplexVariable &t);
    friend ComplexVariable operator-(const ComplexVariable &r, const ComplexVariable &t);
    friend ComplexVariable operator*(const ComplexVariable &r, const ComplexVariable &t);
    friend ComplexVariable operator/(const ComplexVariable &r, const ComplexVariable &t);
    friend ComplexVariable operator^(const ComplexVariable &r, const ComplexVariable &t);

    /*  overload  
                ComplexVariable <+,-,*,/,^> complex<double>
              */
    friend ComplexVariable operator+(const ComplexVariable &r, std::complex<double> t);
    friend ComplexVariable operator-(const ComplexVariable &r, std::complex<double> t);
    friend ComplexVariable operator*(const ComplexVariable &r, std::complex<double> t);
    friend ComplexVariable operator/(const ComplexVariable &r, std::complex<double> t);
    friend ComplexVariable operator^(const ComplexVariable &r, std::complex<double> t);

    /*  overload  
                complex<double> + ComplexVariable
              */
    friend ComplexVariable operator+(std::complex<double> &t, const ComplexVariable &r);
    /*  overload  
                RealVariable + ComplexVariable
              */
    friend ComplexVariable operator+(const RealVariable r, const ComplexVariable c);
    friend ComplexVariable operator+(const ComplexVariable c, const RealVariable r);
    /*  overload  
                int + complex<double>
              */
    friend ComplexVariable operator+(int x, std::complex<double> &t);
    friend ComplexVariable operator+(std::complex<double> &t, int x);
    /*  overload  
                double + complex<double>
              */
    friend ComplexVariable operator+(double x, std::complex<double> &t);
    friend ComplexVariable operator+(std::complex<double> &t, double x);
};
/*  solve function
    return : complex<double>.
           : double.
              */
std::complex<double> solve(std::complex<double> c);
double solve(double r);
/*  overload  operator <<
              */
std::ostream operator<<(std::ostream &o, RealVariable const &s);

}; // namespace solver
