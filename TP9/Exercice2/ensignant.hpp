// Fichier : Enseignant.h
#ifndef ENSEIGNANT_H
#define ENSEIGNANT_H

#include "Personne.h"

class Enseignant : public Personne {
private:
    int _service;

public:
    // Constructeur
    Enseignant(const std::string &nom, int service)
        : Personne(nom), _service(service) {}

    // Méthode pour obtenir le nombre d'heures
    int nbHeure() const {
        return _service;
    }

    // Redéfinition de la méthode nom()
    std::string nom() const override {
        return "Enseignant: " + Personne::nom();
    }
};

#endif // ENSEIGNANT_H
