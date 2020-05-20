#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
using namespace std;
class complex
{
	private:
		float real;
		float imag;
	public:
		complex(float x, float y)
		{
			real=x;
			imag=y;
		}
		friend ostream& operator<<(ostream& os, const complex& dt);
		complex operator +(complex);
		complex operator -(complex);
		complex operator *(complex);
};
#endif
