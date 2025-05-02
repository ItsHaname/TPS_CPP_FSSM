#include "siege.hpp"
#include <iostream>

Siege::Siege() : ville("Non défini") {}
Siege::Siege(const std::string& v) : ville(v) {}
Siege::Siege(const Siege& autre) : ville(autre.ville) {}

std::string Siege::get_ville() const 
{
    return ville;
}

void Siege::set_ville(const std::string& v)
{
    ville = v;
}

void Siege::afficher() const
{
    std::cout << "Siège social à : " << ville << std::endl;
}
