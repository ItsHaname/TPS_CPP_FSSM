#ifndef CLASS_HPP
#define CLASS_HPP

#include <iostream>
#include <vector>
using namespace std;

class Vecteur
{
  private:
    vector<double> v;

  public:
    void setter(int n);
    void getter();
    Vecteur(int n);
    Vecteur(int n, double val);
    Vecteur(const Vecteur& autre);
    void afficher();
    double prod_scl(Vecteur a);
    Vecteur somme(Vecteur m);
    ~Vecteur();
};

#endif