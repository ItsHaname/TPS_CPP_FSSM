#include <iostream>
#include "ex2.hpp"
using namespace std;

void Duree::SetHMS(int h, int m, int s)
{
    heures = h;

    // Gestion des secondes
    if (s >= 0 && s <= 59) {
        secondes = s;
    } else {
        secondes = s % 60;
        minutes = m + (s / 60);
    }

    // Gestion des minutes
    if (minutes >= 0 && minutes <= 59) {
        minutes = m;
    } else {
        heures += minutes / 60;
        minutes += minutes % 60;
    }
}

void Duree::setDEC(double arg)
{
    heures = static_cast<int>(arg);
    double fraction = arg - heures;
    minutes = static_cast<int>(fraction * 60);
    double reste = (fraction * 60) - minutes;
    secondes = static_cast<int>(reste * 60);
}

double Duree::getDEC()
{
    return heures + (static_cast<double>(minutes) / 60.0) + (static_cast<double>(secondes) / 3600.0);
}

void Duree::afficheHMS()
{
    cout << heures << "h, " << minutes << "m, " << secondes << "s" << endl;
}
