// fonction.cpp�: d�finit le point d'entr�e pour l'application console.
//

#include "stdafx.h"
#include <iostream>

using namespace std;
 
double carre(double x)
{
    double resultat;
    resultat = x*x;
    return resultat;
}
 
int main()
{
    double nombre, carreNombre;
    cout << "Entrez un nombre : ";
    cin >> nombre;
 
    carreNombre = carre(nombre); 
 
    cout << "Le carre de " << nombre << " est " << carreNombre << endl;
    return 0;
}
