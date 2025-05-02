#include "moteur.hpp"
#include <iostream>

Moteur::Moteur() : marque("Inconnue"), puissance(0) {}
Moteur::Moteur(const std::string& m, int p) : marque(m), puissance(p) {}

void Moteur::afficher() const {
    std::cout << "Moteur: " << marque << ", " << puissance << " CV\n";
}
