// Fichier : Personne.h
#ifndef PERSONNE_H
#define PERSONNE_H

#include <string>
#include <iostream>

class Personne {
private:
    std::string _nom;

public:
    // Constructeur
    Personne(const std::string &nom) : _nom(nom) {}

    // Méthode pour obtenir le nom
    std::string nom() const {
        return _nom;
    }
};

#endif // PERSONNE_H
