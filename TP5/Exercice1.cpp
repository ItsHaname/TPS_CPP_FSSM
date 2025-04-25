#include"Exercice1.hpp"
#include<iostream>
#include<cmath>
#include<math.h>
using namespace std ;
 void class::deplace(float dx, float dy) {
    x += dx;
    y += dy;
 }
 void class::point affiche(){
    std::cout << "Point(" << x << ", " << y << ")" << std::endl;
 }
 double class::point homothetie(double k){
    x *= k;
    y *= k;
    return 0;
 }
    void class::point rotation(double angle){
        double radian = angle * (M_PI / 180.0);
        int x_new = x * cos(radian) - y * sin(radian);
        int y_new = x * sin(radian) + y * cos(radian);
        x = x_new;
        y = y_new;
    }
    void class::point rhotation(){
        double radian = -angle * (M_PI / 180.0);
        int x_new = x * cos(radian) - y * sin(radian);
        int y_new = x * sin(radian) + y * cos(radian);
        x = x_new;
        y = y_new;
    }
    void class::point theta(){
        double angle = atan2(y, x) * (180.0 / M_PI);
        return angle;
    }
    void class::point affichepol(){
        double r = sqrt(x * x + y * y);
        double theta = atan2(y, x) * (180.0 / M_PI);
        std::cout << "Polar coordinates: (" << r << ", " << theta << " degrees)" << std::endl;
    }
    