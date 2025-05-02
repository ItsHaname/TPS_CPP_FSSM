#ifndef EX2_HPP
#define EX2_HPP

#include <iostream>
using namespace std;

class Duree
{
  private:
    int heures;
    int minutes;
    int secondes;

  public:
    void SetHMS(int h, int m, int s);
    void setDEC(double arg);
    double getDEC();
    int getH() const { return heures; }
    int getM() const { return minutes; }
    int getS() const { return secondes; }
    void afficheHMS();
};

#endif
