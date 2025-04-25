#include<iostream>
using namespace std;

int main() {
    int tab[10], v;
    int i, pos = -1;

    // Saisie des éléments du tableau
    cout << "Veuillez saisir les elements du tableau (attention 10 elements seulement)" << endl;
    for(i = 0; i < 10; i++) { // Commencer à i = 0
        cout << "Entrer l'element tab[" << i << "] = ";
        cin >> tab[i];
    }

    // Saisie de la valeur à rechercher
    cout << "Veuillez saisir la valeur de recherche dans le tableau: ";
    cin >> v;

    // Recherche de la première occurrence de la valeur
    for(i = 0; i < 10; i++) {
        if(tab[i] == v) {
            pos = i;
            break;  // On sort dès qu'on trouve la première occurrence
        }
    }

    // Afficher si la valeur est trouvée ou non
    if(pos != -1) {
        cout << "La premiere occurrence de " << v << " se trouve a la position " << pos << endl;

        // Décalage des éléments après la première occurrence trouvée
        for(int j = pos; j < 9; j++) {
            tab[j] = tab[j + 1];  // Décale les éléments vers la gauche
        }

        tab[9] = 0;  // Place 0 à la dernière position du tableau
    } else {
        cout << v << " ne figure pas dans le tableau." << endl;
    }

    // Affichage du tableau après suppression
    cout << "Le tableau apres suppression de la premiere occurence de " << v << " est: ";
    for(i = 0; i < 10; i++) {
        cout << "tab[" << i << "] = " << tab[i] << endl;
    }
    cout << endl;

    return 0;
}
