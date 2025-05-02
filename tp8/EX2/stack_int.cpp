#include "stack_int.hpp"

stack_int::stack_int(int taille)
    : capacite(taille), sommet(0) {
    data = new int[capacite];
}

stack_int::stack_int(const stack_int& autre)
    : capacite(autre.capacite), sommet(autre.sommet) {
    data = new int[capacite];
    for (int i = 0; i < sommet; ++i)
        data[i] = autre.data[i];
}

stack_int::~stack_int() {
    delete[] data;
}

void stack_int::afficher() const {
    std::cout << "Pile : ";
    for (int i = 0; i < sommet; ++i)
        std::cout << data[i] << " ";
    std::cout << std::endl;
}

stack_int& operator<<(stack_int& pile, int n) {
    if (pile.sommet < pile.capacite)
        pile.data[pile.sommet++] = n;
    return pile;
}

stack_int& operator>>(stack_int& pile, int& n) {
    if (pile.sommet > 0)
        n = pile.data[--pile.sommet];
    return pile;
}

int stack_int::operator++(int) {
    return (sommet == capacite) ? 1 : 0;
}

int stack_int::operator--(int)
{
    return (sommet == 0);
}
