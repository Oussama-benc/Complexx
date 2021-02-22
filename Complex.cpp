#include "Complex.h"

complex::complex(double a, double b)
{
	Re = a;
	Img = b;
}

void complex::afficher()
{
	cout << Re;
	if (Img >= 0)
		cout << " + ";

	cout << Img << "i" << endl;
}

double complex::module()
{
	return sqrt(Re * Re + Img + Img);
}

complex complex::conjugue()
{
	complex c;
	c.Re = Re;
	c.Img = -Img;
	return c;
}

complex complex::operator+(double x)
{
	complex s;
	s.Re = Re + x;
	s.Img = Img;
	return s;
}

complex complex::operator-(complex a)
{
	complex s;
	s.Re = Re - a.Re;
	s.Img = Img - a.Img;
	return s;
}

complex complex::operator*(complex a)
{
	complex p;
	p.Re = Re * a.Re - Img * a.Img;
	p.Img = Re * a.Img + Img * a.Re;
	return p;
}
