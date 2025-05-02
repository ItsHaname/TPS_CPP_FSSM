#ifndef SIEGE_HPP
#define SIEGE_HPP

#include <string>

class Siege {
private:
    std::string ville;

public:
    Siege();
    Siege(const std::string& ville);
    Siege(const Siege& autre);

    std::string get_ville() const;
    void set_ville(const std::string& v);
    void afficher() const;
};

#endif
