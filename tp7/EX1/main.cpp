#include "voiture.hpp"

int main() {
    Personne proprietaire("Mohamed Lakhdar");
    Moteur moteur("Renault", 120);
    Voiture v("Dacia", "Duster", proprietaire, moteur);

    v.afficher();
    return 0;
}
