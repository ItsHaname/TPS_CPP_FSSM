#ifndef VOITURE_HPP
#define VOITURE_HPP

#include "personne.hpp"
#include "moteur.hpp"
#include <string>

class Voiture {
private:
    std::string marque;
    std::string modele;
    Personne proprietaire;
    Moteur moteur;

public:
    Voiture(const std::string& marque, const std::string& modele,
            const Personne& proprietaire, const Moteur& moteur);

    void afficher() const;
};

#endif
