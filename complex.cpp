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
main()
{
	float x,y,w,z;
	cout<<"Enter first number real and imag";
	cin>>x>>y;
	cout<<"Enter second number real and imag";
	cin>>w>>z;
	complex c1(x,y),c2(w,z);
	complex c3,c4,c5;
	c3 = c1+c2;
	c4 = c1-c2;
	c5 = c1*c2;
	cout <<"Addition"<<c3;
	cout <<"Subtraction"<<c4;
	cout <<"Multiplication"<<c5;
	return 0;
}