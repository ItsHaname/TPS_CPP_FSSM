#include<iostream>
using namespace std;
int main(){
    point p1,*p2,p3;
    p1.deplace(2,3);
    p1.affiche();
    p1.homothetie(2);
    p1.affiche();
    p1.rotation(45);
    p1.affiche();
    p1.rrotation();
    p1.affiche();
    p1.theta();
    p1.affichepol();
    p2 = new point;
    p2->deplace(4,5);
    p2->affiche();
    p2->homothetie(3);
    p2->affiche();
    p2->rotation(90);
    p2->affiche();
    p2->rrotation();
    p2->affiche();
    p2->theta();
    p2->affichepol();
    delete p2;
    return 0;
}