#ifndef PERSONNE_HPP
#define PERSONNE_HPP

#include <string>

class Personne {
private:
    std::string nom;

public:
    Personne();
    Personne(const std::string& nom);
    void afficher() const;
};

#endif
