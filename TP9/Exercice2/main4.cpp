// Fichier : main.cpp
#include <iostream>
#include "EleveVacataire.h"

// Fonction pour afficher le nom
void afficheNom(const Personne &p) {
    std::cout << p.nom() << std::endl;
}

int main() {
    EleveVacataire ev("Charlie", 15, "Math", "Algo1, POO");
    afficheNom(ev);  // Affiche "Enseignant: Charlie et Eleve: Charlie"
    return 0;
}
