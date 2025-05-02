#ifndef CLASS_HPP
#define CLASS_HPP
#include <iostream>
using namespace std;
class Aleat
{
  private:
    int *vecteurs;
    int limite;
    int taille;


  public:
    Aleat(int n, int lim);
    Aleat(const Aleat  &v);
    int getValeur(int n);
    int* getValeurs();
    int *histo();
    void afficher();
    ~Aleat();
};
#endif