#include "entreprise.hpp"

int main()
{
    Entreprise e("Marrakech");

    Employe emp1("Mohamed");
    Employe emp2("Fatima");
    Employe emp3("Youssef");

    e.recrute(emp1);
    e.recrute(emp2);
    e.recrute(emp3);

    e.afficher();
    e.avis_employe(1);
    e.avis_employe(3);

    return 0;
}
