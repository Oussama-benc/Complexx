// ConsoleApplication1.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include"complex.h"
using namespace std;
int main()
{
    complex a, b, c;
    cout << "Complexe A = " << endl;
    cout << "Le module de A est : " << a.module() << endl;
    cout << "Le conjugue de A est : ";
    a.conjugue().afficher();

    cout << "A = ";
    a.afficher();
    cout << "B = ";
    b.afficher();

    cout << "A + 12 = ";
    c = (a + 12);
    c.afficher();
    cout << "A * B = ";
    c = (a * b);
    c.afficher();

    cout << "B - A = ";
    c = (b - a);
    c.afficher();
};
