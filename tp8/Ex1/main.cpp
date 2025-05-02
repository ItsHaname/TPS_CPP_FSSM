#include "vecteur3d.hpp"

int main() {
    Vecteur3D v1(1, 2, 3), v2(1, 2, 3), v3(4, 5, 6);

    std::cout << "Vecteur 1 : ";
    v1.afficher();

    std::cout << "Vecteur 2 : ";
    v2.afficher();

    std::cout << "v1 et v2 sont-ils égaux ? " << (coincide(v1, v2) ? "Oui" : "Non") << std::endl;

    std::cout << "v1 + v3 = ";
    (v1 + v3).afficher();

    std::cout << "Produit scalaire v1 * v3 : " << (v1 * v3) << std::endl;

    return 0;
}
