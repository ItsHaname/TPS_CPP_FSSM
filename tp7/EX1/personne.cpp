#include "personne.hpp"
#include <iostream>

Personne::Personne() : nom("Inconnu") {}
Personne::Personne(const std::string& n) : nom(n) {}

void Personne::afficher() const {
    std::cout << "Propriétaire: " << nom << std::endl;
}
