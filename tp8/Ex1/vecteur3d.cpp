#include "vecteur3d.hpp"

// Constructeurs
Vecteur3D::Vecteur3D() : x(0), y(0), z(0) {}
Vecteur3D::Vecteur3D(float a, float b, float c) : x(a), y(b), z(c) {}

// Méthode d'affichage
void Vecteur3D::afficher() const {
    std::cout << "(" << x << ", " << y << ", " << z << ")" << std::endl;
}

// Opérateurs membres
bool Vecteur3D::operator==(const Vecteur3D& autre) const {
    return x == autre.x && y == autre.y && z == autre.z;
}

bool Vecteur3D::operator!=(const Vecteur3D& autre) const {
    return !(*this == autre);
}

// Fonction amie : coïncidence
bool coincide(const Vecteur3D& v1, const Vecteur3D& v2) {
    return v1 == v2;
}

// Addition de deux vecteurs
Vecteur3D operator+(const Vecteur3D& v1, const Vecteur3D& v2) {
    return Vecteur3D(v1.x + v2.x, v1.y + v2.y, v1.z + v2.z);
}

// Produit scalaire
float operator*(const Vecteur3D& v1, const Vecteur3D& v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}
