#include "class.hpp"

int main()
{
    Vecteur v1(3, 2.0);
    Vecteur v2(3, 1.5);

    v1.afficher();
    v2.afficher();

    Vecteur somme = v1.somme(v2);
    somme.afficher();

    double produit = v1.prod_scl(v2);
    cout << "Produit scalaire : " << produit << endl;

    return 0;
}
