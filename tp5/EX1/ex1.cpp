//source code ex1.cpp 
#include "ex1.hpp"
#include <iostream>
using namespace std;
void Point::deplace(float dx , float dy)
{
  x += dx;
  y += dy;
}
void Point::afficher()
{
  cout << "Les coordonnes du point p1 sont : (" << x << ","<<  y << ")" << endl;
}
void Point::homothetie(double ho)
{
  x *= ho;
  y *= ho;
}
// p = racine ( x^2 + y ^ 2) ;
double Point::rho()
{
  return sqrt(x * x + y * y);
}
/*
θ=arctan(x / y) ;
*/
double Point::theta() {
  return atan2(y ,  x );
}

void Point::rotation(double angle) {
  double rx, ry;
  rx = x * cos(angle) -  y * sin(angle);
  ry = x * sin(angle) + y * cos(angle);
  x = rx;
  y = ry;
}
void Point::affichePol()
{
  std::cout << "Polar Coordinates:" << std::endl;
  std::cout << "rho = " << rho() << std::endl;
  std::cout << "theta = " << theta() << std::endl;
}