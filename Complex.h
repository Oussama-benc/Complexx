#pragma once
#include <iostream>
#include <cmath>

using namespace std;

class complex {
private:
    double Re;
    double Img;
public:
    complex(double a = 0, double b = 0);
    void afficher();
    double module();
    complex conjugue();
    complex operator+(double x);
    complex operator-(complex a);
    complex operator*(complex a);
};
    

