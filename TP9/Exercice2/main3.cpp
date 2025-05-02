// Fichier : main.cpp
#include <iostream>
#include "Enseignant.h"

// Fonction pour afficher le nom
void afficheNom(const Personne &p) {
    std::cout << p.nom() << std::endl;
}

int main() {
    Enseignant e("Professeur X", 20);
    afficheNom(e);  // Affiche "Enseignant: Professeur X"
    return 0;
}
