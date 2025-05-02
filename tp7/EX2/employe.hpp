#ifndef EMPLOYE_HPP
#define EMPLOYE_HPP

#include <string>

class Employe {
private:
    std::string nom;

public:
    Employe();
    Employe(const std::string& nom);
    Employe(const Employe& autre);

    std::string get_nom() const;
    void set_nom(const std::string& nom);
    void afficher() const;
};

#endif
