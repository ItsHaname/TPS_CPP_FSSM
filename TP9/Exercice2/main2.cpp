// Fichier : main.cpp
#include <iostream>
#include "Etudiant.h"

// Fonction pour afficher le nom
void afficheNom(const Personne &p) {
    std::cout << p.nom() << std::endl;
}

int main() {
    Etudiant e("Bob", "Info", "Algo1, POO");
    afficheNom(e);  // Affiche "Eleve: Bob"
    return 0;
}
