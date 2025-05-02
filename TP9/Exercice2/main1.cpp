// Fichier : main.cpp
#include <iostream>
#include "Personne.h"

// Fonction pour afficher le nom
void afficheNom(const Personne &p) {
    std::cout << p.nom() << std::endl;
}

int main() {
    Personne p("Alice");
    afficheNom(p);  // Affiche "Alice"
    return 0;
}
