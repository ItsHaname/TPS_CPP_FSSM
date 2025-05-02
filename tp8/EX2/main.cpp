#include "stack_int.hpp"

int main() {
    stack_int p(5);
    p << 10 << 20 << 30;
    p.afficher();
    std::cout << "Pile pleine ? " << (p++ ? "Oui" : "Non") << std::endl;

    int a, b, c;
    p >> a >> b >> c;
    std::cout << "Valeurs retirées : " << a << ", " << b << ", " << c << std::endl;
    std::cout << "Pile vide ? " << (p-- ? "Oui" : "Non") << std::endl;

    return 0;
}
