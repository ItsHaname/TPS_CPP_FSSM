#include "entreprise.hpp"
#include <iostream>

Entreprise::Entreprise(const std::string& ville) : siegeSocial(ville) {}

Entreprise::Entreprise(const Entreprise& autre)
    : siegeSocial(autre.siegeSocial), staff(autre.staff) {}

Siege Entreprise::get_siegeSocial() const {
    return siegeSocial;
}

void Entreprise::set_siegeSocial(const Siege& s) {
    siegeSocial = s;
}

std::vector<Employe> Entreprise::get_staff() const {
    return staff;
}

void Entreprise::set_staff(const std::vector<Employe>& nouveaux) {
    staff = nouveaux;
}

void Entreprise::recrute(const Employe& e) {
    staff.push_back(e);
}

void Entreprise::afficher() const {
    siegeSocial.afficher();
    std::cout << "Nombre d'employés : " << staff.size() << std::endl;
}

void Entreprise::avis_employe(int indice) const 
{
    if (indice >= 0 && indice < static_cast<int>(staff.size())) {
        staff[indice].afficher();
    } else {
        std::cout << "Erreur : indice invalide !" << std::endl;
    }
}
