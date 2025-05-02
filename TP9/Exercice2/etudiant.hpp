// Fichier : Etudiant.h
#ifndef ETUDIANT_H
#define ETUDIANT_H

#include "Personne.h"

class Etudiant : public Personne {
private:
    std::string _filiere;
    std::string _enseignement;

public:
    // Constructeur
    Etudiant(const std::string &nom, const std::string &filiere, const std::string &enseignement)
        : Personne(nom), _filiere(filiere), _enseignement(enseignement) {}

    // Méthodes pour obtenir les attributs
    std::string filiere() const {
        return _filiere;
    }

    std::string enseignement() const {
        return _enseignement;
    }

    // Méthode pour définir l'enseignement
    void setEnseignement(const std::string &enseignement) {
        _enseignement = enseignement;
    }

    // Redéfinition de la méthode nom()
    std::string nom() const override {
        return "Eleve: " + Personne::nom();
    }
};

#endif // ETUDIANT_H
