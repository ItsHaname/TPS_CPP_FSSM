#include "voiture.hpp"
#include <iostream>

Voiture::Voiture(const std::string& m, const std::string& mod,
                 const Personne& p, const Moteur& mot)
    : marque(m), modele(mod), proprietaire(p), moteur(mot) {}

void Voiture::afficher() const {
    std::cout << "Voiture: " << marque << " " << modele << std::endl;
    proprietaire.afficher();
    moteur.afficher();
}
