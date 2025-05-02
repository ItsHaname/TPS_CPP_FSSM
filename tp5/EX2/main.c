#include "ex2.hpp"

int main()
{
  Duree d1;
  
  d1.SetHMS(10, 202, 2);
  cout << d1.getH() << " heures " << d1.getM() << " minutes" << d1.getS() << " secondes" << endl;
}