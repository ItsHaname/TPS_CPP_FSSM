#ifndef VECTEUR3D_HPP
#define VECTEUR3D_HPP

#include <iostream>

class Vecteur3D {
private:
    float x, y, z;

public:
    // Constructeurs
    Vecteur3D();
    Vecteur3D(float x, float y, float z);

    // Méthode d'affichage
    void afficher() const;

    // Méthodes membres pour == et !=
    bool operator==(const Vecteur3D& autre) const;
    bool operator!=(const Vecteur3D& autre) const;

    // Fonctions amies
    friend bool coincide(const Vecteur3D& v1, const Vecteur3D& v2);
    friend Vecteur3D operator+(const Vecteur3D& v1, const Vecteur3D& v2);
    friend float operator*(const Vecteur3D& v1, const Vecteur3D& v2);
};

#endif
