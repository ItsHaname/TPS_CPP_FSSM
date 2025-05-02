#ifndef ENTREPRISE_HPP
#define ENTREPRISE_HPP

#include "siege.hpp"
#include "employe.hpp"
#include <vector>

class Entreprise {
private:
    Siege siegeSocial;
    std::vector<Employe> staff;

public:
    Entreprise(const std::string& ville);
    Entreprise(const Entreprise& autre);

    Siege get_siegeSocial() const;
    void set_siegeSocial(const Siege& s);
    std::vector<Employe> get_staff() const;
    void set_staff(const std::vector<Employe>& nouveaux);

    void recrute(const Employe& e);
    void afficher() const;
    void avis_employe(int indice) const;
};

#endif
