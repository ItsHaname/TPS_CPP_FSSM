#include "ex1.hpp"

int main()
{
  Point p1(5,8);
  Point p2(15.0, 81.0);
  Point p3(35.0, 28.0);
  p1.afficher();
  std::cout << "Pour le point p1, rho = " << p1.rho() << " theta = " << p1.theta() << std::endl;
  p1.deplace(10.0, 20.0);
    std::cout << "Après la translation, les coordonnées cartésiennes de p1 sont : ";
    p1.afficher();
    p2.afficher();
    p2.affichePol();
    p2.homothetie(1.5);
    std::cout << "Après l'homothétie, les coordonnées cartésiennes de p2 sont : ";
    p2.afficher();
    p3.afficher();
    p3.rotation(M_PI / 4);
    std::cout << "Après la rotation, les coordonnées cartésiennes de p3 sont : ";
    p3.afficher();
    return 0;
}