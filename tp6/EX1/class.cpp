#include "class.hpp"

Vecteur::Vecteur(int n)
{
    cout << "Constructeur Vecteur(int) appelé.\n";
    v.resize(n, 0.0);
}

Vecteur::Vecteur(int n, double val)
{
    cout << "Constructeur Vecteur(int, double) appelé.\n";
    v.resize(n, val);
}

Vecteur::Vecteur(const Vecteur& autre) : v(autre.v)
{
    cout << "Constructeur de recopie appelé.\n";
}

void Vecteur::afficher()
{
    cout << "Affichage du vecteur :\n";
    int i = 1;
    for (double c : v)
        cout << "  Élément " << i++ << " : " << c << endl;
}

double Vecteur::prod_scl(Vecteur a)
{
    cout << "Produit scalaire appelé.\n";
    if (v.size() != a.v.size())
    {
        cout << "  Erreur : dimensions incompatibles.\n";
        return 0.0;
    }

    double produit_scalaire = 0.0;
    for (size_t i = 0; i < v.size(); ++i)
        produit_scalaire += v[i] * a.v[i];

    return produit_scalaire;
}

Vecteur Vecteur::somme(Vecteur m)
{
    cout << "Somme de deux vecteurs appelée.\n";
    if (v.size() != m.v.size())
    {
        cout << "  Erreur : dimensions incompatibles.\n";
        return Vecteur(0);  // retourne un vecteur vide
    }

    Vecteur sum(v.size());
    for (size_t i = 0; i < v.size(); ++i)
        sum.v[i] = v[i] + m.v[i];

    return sum;
}

Vecteur::~Vecteur()
{
    cout << "Destructeur appelé.\n";
}
