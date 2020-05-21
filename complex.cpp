#include "complex.h"
#include <iostream>
using namespace std;
ostream& complex ::operator<<(ostream& os, const complex& dt)
{
    os << dt.real <<"+j"<< dt.imag;
    return os;
}
complex complex::operator +(complex obj)
{
	complex temp;
	temp.real=real+obj.real;
	temp.imag=imag+obj.imag;
	return(temp);
}
complex complex::operator -(complex obj)
{
	complex temp;
	temp.real=real-obj.real;
	temp.imag=imag-obj.imag;
	return(temp);
}
complex complex::operator *(complex c)
{
float real1,real2;
real1=real;
real2=c.real;
real=(real*c.real)-(imag*c.imag);
/* if (a,b)(c,d) then formula of multiplication
is (ac-bd,ad+bc) */
imag=(real1*c.imag)+(imag*real2);
complex temp;
temp.real=real;
temp.imag=imag;
return temp;
}
