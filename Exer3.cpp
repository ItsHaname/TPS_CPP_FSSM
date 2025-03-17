#include<iostream>
using namespace std;

int main() {
    int positif;
    int somme = 0;  // Initialisation de somme à 0
    float moy;  // Moyenne de type float
    int i = 0;  // Compteur d'éléments saisis

    cout << "Veuillez saisir un entier strictement positif (0 pour arrêter) : " << endl;

    do {
        cin >> positif;

        if (positif > 0) {  // On accepte uniquement les entiers strictement positifs
            somme += positif;  // Ajouter l'entier à la somme
            i++;  // Incrémenter le compteur
        } else if (positif < 0) {
            cout << "Veuillez entrer un nombre positif !" << endl;
        }

    } while (positif != 0);  // La saisie continue tant que l'utilisateur ne tape pas 0

    // Calcul et affichage de la moyenne si des nombres ont été saisis
    if (i > 0) {
        moy = float(somme) / i;  // Calcul de la moyenne
        cout << "La moyenne des nombres saisis est : " << moy << endl;
    } else {
        cout << "Aucun nombre positif n'a été saisi." << endl;
    }

    return 0;
}
