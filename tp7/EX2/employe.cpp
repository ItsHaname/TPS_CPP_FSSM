#include "employe.hpp"
#include <iostream>

Employe::Employe() : nom("Inconnu") {}
Employe::Employe(const std::string& n) : nom(n) {}
Employe::Employe(const Employe& autre) : nom(autre.nom) {}

std::string Employe::get_nom() const {
    return nom;
}

void Employe::set_nom(const std::string& n) {
    nom = n;
}

void Employe::afficher() const {
    std::cout << "Je m'appelle " << nom << ", je suis content de travailler ici !" << std::endl;
}
