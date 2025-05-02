#ifndef VECTEUR_HPP
#define VECTEUR_HPP

#include <iostream>

template <typename T>
class VecteurDynamique {
private:
    T* data;
    int taille;

public:
    VecteurDynamique(int t);
    ~VecteurDynamique();

    int size() const;
    T& operator[](int i);
    const T& operator[](int i) const;

    void afficher() const;
};

#include "vecteur.cpp"

#endif
