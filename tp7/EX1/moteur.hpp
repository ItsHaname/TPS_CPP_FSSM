#ifndef MOTEUR_HPP
#define MOTEUR_HPP

#include <string>

class Moteur {
private:
    std::string marque;
    int puissance;

public:
    Moteur();
    Moteur(const std::string& marque, int puissance);
    void afficher() const;
};

#endif
