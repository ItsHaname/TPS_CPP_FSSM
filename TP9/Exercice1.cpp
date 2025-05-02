// Fichier : main.cpp
#include <iostream>
#include "DynamicVector.h"

int main() {
    try {
        DynamicVector<int> vec(5); // vecteur de 5 éléments

        // Remplissage
        for (size_t i = 0; i < vec.getSize(); ++i) {
            vec[i] = static_cast<int>(i * 10);
        }

        // Affichage
        vec.print();

        // Accès hors limites pour tester la sécurité
        // vec[10] = 50; // <-- décommente pour tester l'exception !

    } catch (const std::out_of_range& e) {
        std::cerr << "Erreur : " << e.what() << std::endl;
    }

    return 0;
}
