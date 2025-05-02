#include "class.hpp"
#include<iostream>
using namespace std;
Aleat::Aleat(int n, int lim)
{
  cout << "Constructeur!" << endl;
  taille = n;
  limite = lim;
  vecteurs = new int[taille];
  for (int i = 0; i < taille; i++)
  {
    vecteurs[i] = rand() % (limite + 1);
  }
}
Aleat::~Aleat()
{
  cout << "Deconstructeur!" << endl;
  delete[] vecteurs;
}


Aleat::Aleat(const Aleat &v)
{
  cout << "copie constructeur!" << endl;
  taille = v.taille;
  limite = v.limite;
  vecteurs = new int[taille];
  for (int i = 0; i < taille; i ++)
  {
    vecteurs[i] = v.vecteurs[i];
  }
}

int Aleat::getValeur(int n)
{
  if(n > limite)
  {
    cout << "l'indice n'est pas dans l'intervalle [0," << limite << "]." << endl;
    return 0;
  }
  return vecteurs[n];
}

int* Aleat::getValeurs()
{
  int *q = new int[taille];
  for (int i = 0; i < taille; i++)
    q[i] = vecteurs[i];
  return q;
}

int* Aleat::histo()
{
  int *histogramme = new int[limite + 1];
  for (int i = 0; i <= limite; i++)
    histogramme[i] = 0;
  for (int i = 0; i < taille; i++)
    histogramme[vecteurs[i]]++;
  return histogramme;
}

void Aleat::afficher()
{
  for (int i = 0; i < taille; i++)
  {
    cout << "valeur[" << i << "] = " << vecteurs[i] << endl;
  }
}

