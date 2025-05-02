//header file ex1.hpp
#ifndef EX1_HPP
#define EX1_HPP

#include <iostream>
#include <cmath>
class Point
{
  private :
    float x;
    float y;
  public:
  Point(float x_init = 0.0, float y_init = 0.0) : x(x_init), y(y_init) {}
  void setX(float x_val) { x = x_val; }
  void setY(float y_val) { y = y_val; }
  float getX() const { return x; }
  float getY() const { return y; }
    void deplace(float dx, float dy);
    void afficher();
    void homothetie(double ho);
    void rotation(double angle);
    double rho() ;
    double theta();
    void affichePol(); 
};
#endif