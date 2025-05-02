#ifndef STACK_INT_HPP
#define STACK_INT_HPP

#include <vector>
#include <iostream>

class stack_int {
private:
    int* data;
    int capacite;
    int sommet;

public:
    stack_int(int taille = 20);
    stack_int(const stack_int& autre);
    ~stack_int();

    void afficher() const;

    friend stack_int& operator<<(stack_int& pile, int n);
    friend stack_int& operator>>(stack_int& pile, int& n);
    int operator++(int);
    int operator--(int);
    stack_int& operator=(const stack_int&) = delete;
};

#endif
