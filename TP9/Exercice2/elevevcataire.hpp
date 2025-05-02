// Fichier : EleveVacataire.h
#ifndef ELEVEVACATAIRE_H
#define ELEVEVACATAIRE_H

#include "Enseignant.h"
#include "Etudiant.h"

class EleveVacataire : public Enseignant, public Etudiant {
public:
    // Constructeur
    EleveVacataire(const std::string &nom, int service, const std::string &filiere, const std::string &enseignement)
        : Personne(nom), Enseignant(nom, service), Etudiant(nom, filiere, enseignement) {}

    // Redéfinition de la méthode nom() pour résoudre l'ambiguïté
    std::string nom() const override {
        return Enseignant::nom() + " et " + Etudiant::nom();
    }
};

#endif // ELEVEVACATAIRE_H
