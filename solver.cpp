
#include <complex>
#include <stdbool.h>
#include <cmath>
#include "solver.hpp"

using namespace std;
using namespace solver;

/*RealVaribel constructor*/

solver::RealVariable::RealVariable(double d)
{
    x1 = d;
};
solver::RealVariable::RealVariable()
{
    x1 = 0;
};
/*ComplexVariable constructor*/
solver::ComplexVariable::ComplexVariable(double r, double i)
{
    ans.imag(i);
    ans.real(r);
};
solver::ComplexVariable::ComplexVariable(double r)
{
    ans.real(r);
};
solver::ComplexVariable::ComplexVariable()
{
    ans = 0;
};

/* 
        overload operator  ==          
        from right and left side
    */
double solver::operator==(const solver::RealVariable &d, double x)
{
    return x;
};
double solver::operator==(double x, const solver::RealVariable &d)
{
    return x;
};
double solver::operator==(const solver::RealVariable &d, int x)
{
    return x;
};
double solver::operator==(int x, const solver::RealVariable &d)
{
    return x;
};
double solver::operator==(const solver::RealVariable &r, const solver::RealVariable &d)
{
    return r.x1;
};
/* 
        overload operator  <=          
        from right and left side
        throw "unlegal operator" message exception
    */
double solver::operator<=(const solver::RealVariable &d, double x)
{
    throw std::invalid_argument("unlegal operator");
};
double solver::operator<=(double x, const solver::RealVariable &d)
{
    throw std::invalid_argument("unlegal operator");
};
double solver::operator<=(const solver::RealVariable &d, int x)
{
    throw std::invalid_argument("unlegal operator");
};
double solver::operator<=(int x, const solver::RealVariable &d)
{
    throw std::invalid_argument("unlegal operator");
};
double solver::operator<=(const solver::RealVariable &r, const solver::RealVariable &d)
{
    throw std::invalid_argument("unlegal operator");
};
/* 
        overload operator  >=          
        from right and left side
        throw "unlegal operator" message exception
    */
double solver::operator>=(const solver::RealVariable &d, double x)
{
    throw std::invalid_argument("unlegal operator");
};
double solver::operator>=(double x, const solver::RealVariable &d)
{
    throw std::invalid_argument("unlegal operator");
};
double solver::operator>=(const solver::RealVariable &d, int x)
{
    throw std::invalid_argument("unlegal operator");
};
double solver::operator>=(int x, const solver::RealVariable &d)
{
    throw std::invalid_argument("unlegal operator");
};
double solver::operator>=(const solver::RealVariable &r, const solver::RealVariable &d)
{
    throw std::invalid_argument("unlegal operator");
};
/* 
        overload operator RealVariablr + int         
        from right side
    */
RealVariable solver::operator+(const solver::RealVariable &r, int x)
{
    return r.x1;
};
RealVariable solver::operator-(const solver::RealVariable &r, int x)
{
    return r.x1;
};
RealVariable solver::operator*(const solver::RealVariable &r, int x)
{
    return r.x1;
};
RealVariable solver::operator/(const solver::RealVariable &r, int x)
{
    return r.x1;
};
RealVariable solver::operator^(const solver::RealVariable &r, int x)
{
    return r.x1;
};
/* 
        overload operator int + RealVariablr         
        from right side
    */
RealVariable solver::operator+(int x, const solver::RealVariable &r)

{
    return r.x1;
};
RealVariable solver::operator-(int x, const solver::RealVariable &r)

{
    return r.x1;
};
RealVariable solver::operator*(int x, const solver::RealVariable &r)

{
    return r.x1;
};
RealVariable solver::operator/(int x, const solver::RealVariable &r)

{
    return r.x1;
};
RealVariable solver::operator^(int x, const solver::RealVariable &r)

{
    return r.x1;
};

/* 
        overload operator RealVariable + RealVariablr         
        from right side
    */
RealVariable solver::operator+(const solver::RealVariable &r, const solver::RealVariable &t)
{
    return r.x1;
};
RealVariable solver::operator-(const solver::RealVariable &r, const solver::RealVariable &t)
{
    return r.x1;
};
RealVariable solver::operator*(const solver::RealVariable &r, const solver::RealVariable &t)
{
    return r.x1;
};
RealVariable solver::operator/(const solver::RealVariable &r, const solver::RealVariable &t)
{
    return r.x1;
};
RealVariable solver::operator^(const solver::RealVariable &r, const solver::RealVariable &t)
{
    return r.x1;
};

/* 
        overload operator RealVariable + complex<double>         
        from right side
    */
RealVariable solver::operator+(const solver::RealVariable &r, std::complex<double> t)
{
    return r.x1;
};
/* 
        overload operator complex<double> + RealVariable        
        from left side
    */
RealVariable solver::operator+(std::complex<double> &t, solver::RealVariable r)
{
    return r.x1;
};

/* 
    ComplexVariable
        overload operator  ==          
        from right and left side
    */
std::complex<double> solver::operator==(const solver::ComplexVariable &d, double x)
{
    return x;
};
std::complex<double> solver::operator==(double x, const solver::ComplexVariable &d)
{
    return x;
};
std::complex<double> solver::operator==(const solver::ComplexVariable &d, int x)
{
    return d.ans.real();
};
std::complex<double> solver::operator==(int x, const solver::ComplexVariable &d)
{
    return d.ans.real();
};
std::complex<double> solver::operator==(solver::ComplexVariable d, solver::ComplexVariable s)
{
    return d.ans.real();
};
std::complex<double> solver::operator==(std::complex<double> &t, int)
{
    return t;
};
/* 
        overload operator  <=          
        from right and left side
        throw "unlegal operator" message exception
    */

std::complex<double> solver::operator<=(double x, const solver::ComplexVariable &d)
{
    throw std::invalid_argument("unlegal operator");
};
std::complex<double> solver::operator<=(const solver::ComplexVariable &d, int x)
{
    throw std::invalid_argument("unlegal operator");
};
std::complex<double> solver::operator<=(int x, const solver::ComplexVariable &d)
{
    throw std::invalid_argument("unlegal operator");
};
std::complex<double> solver::operator<=(solver::ComplexVariable d, solver::ComplexVariable s)
{
    throw std::invalid_argument("unlegal operator");
};
/* 
        overload operator  >=          
        from right and left side
        throw "unlegal operator" message exception
    */

std::complex<double> solver::operator>=(double x, const solver::ComplexVariable &d)
{
    throw std::invalid_argument("unlegal operator");
};
std::complex<double> solver::operator>=(const solver::ComplexVariable &d, int x)
{
    throw std::invalid_argument("unlegal operator");
};
std::complex<double> solver::operator>=(int x, const solver::ComplexVariable &d)
{
    throw std::invalid_argument("unlegal operator");
};
std::complex<double> solver::operator>=(solver::ComplexVariable d, solver::ComplexVariable s)
{
    throw std::invalid_argument("unlegal operator");
};

/* 
        overload operator ComplexVariable + int         
        from right side
    */
ComplexVariable solver::operator+(const solver::ComplexVariable &r, int x)
{
    return r;
};
ComplexVariable solver::operator-(const solver::ComplexVariable &r, int x)
{
    return r;
};
ComplexVariable solver::operator*(const solver::ComplexVariable &r, int x)
{
    return r;
};
ComplexVariable solver::operator/(const solver::ComplexVariable &r, int x)
{
    return r;
};
ComplexVariable solver::operator^(const solver::ComplexVariable &r, int x)
{
    return r;
};
/* 
        overload operator int + ComplexVariable         
        from left side
    */
ComplexVariable solver::operator+(int x, const solver::ComplexVariable &r)
{
    return r;
};
ComplexVariable solver::operator-(int x, const solver::ComplexVariable &r)
{
    return r;
};
ComplexVariable solver::operator*(int x, const solver::ComplexVariable &r)
{
    return r;
};
ComplexVariable solver::operator/(int x, const solver::ComplexVariable &r)
{
    return r;
};
ComplexVariable solver::operator^(int x, const solver::ComplexVariable &r)
{
    return r;
};
/* 
        overload operator ComplexVariable + ComplexVariable         
        from right side
    */
ComplexVariable solver::operator+(const solver::ComplexVariable &r, const solver::ComplexVariable &t)
{
    return r;
};
ComplexVariable solver::operator-(const solver::ComplexVariable &r, const solver::ComplexVariable &t)
{
    return r;
};
ComplexVariable solver::operator*(const solver::ComplexVariable &r, const solver::ComplexVariable &t)
{
    return r;
};
ComplexVariable solver::operator/(const solver::ComplexVariable &r, const solver::ComplexVariable &t)
{
    return r;
};
ComplexVariable solver::operator^(const solver::ComplexVariable &r, const solver::ComplexVariable &t)
{
    return r;
};

/* 
        overload operator ComplexVariable + complex<double>         
        from right side
    */
ComplexVariable solver::operator+(const solver::ComplexVariable &r, std::complex<double> t)
{
    return r;
};
ComplexVariable solver::operator-(const solver::ComplexVariable &r, std::complex<double> t)
{
    return r;
};

ComplexVariable solver::operator*(const solver::ComplexVariable &r, std::complex<double> t)
{
    return r;
};

ComplexVariable solver::operator/(const solver::ComplexVariable &r, std::complex<double> t)
{
    return r;
};

ComplexVariable solver::operator^(const solver::ComplexVariable &r, std::complex<double> t)
{
    return r;
};

/* 
        overload operator int + complex<double>         
        from right and left side
    */
ComplexVariable solver::operator+(int x, std::complex<double> &t)
{
    ComplexVariable temp;
    return temp;
};
ComplexVariable solver::operator+(std::complex<double> &t, int x)
{
    ComplexVariable temp;
    return temp;
};
/* 
        overload operator complex<double> + ComplexVariable        
        from right  side
    */
ComplexVariable solver::operator+(std::complex<double> &t, const solver::ComplexVariable &r)
{
    return r;
};
/* 
        overload operator RealVariable+ ComplexVariable        
        from right and left side
    */
ComplexVariable solver::operator+(solver::RealVariable r, solver::ComplexVariable c)
{
    return c;
};
ComplexVariable solver::operator+(solver::ComplexVariable c, solver::RealVariable r)
{
    return c;
};
/* 
        overload operator double + complex<double>        
        from right and left side
    */

ComplexVariable solver::operator+(double x, std::complex<double> &t)
{
    ComplexVariable temp;
    return temp;
};
ComplexVariable solver::operator+(std::complex<double> &t, double x)
{
    ComplexVariable temp;
    return temp;
};
/* 
    solve function
    return : complex<double>
           :double
    */
double solver::solve(double r)
{
    return r;
};
std::complex<double> solver::solve(std::complex<double> c)
{
    ComplexVariable temp;
    return temp.ans.real();
};
