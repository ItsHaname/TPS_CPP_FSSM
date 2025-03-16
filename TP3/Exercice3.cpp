#include<iostream>
#include<cmath>

double fonc(double x , bool& ok) {
    if (x >= 1 && x <= 2) {
        ok = true;
        return sqrt((x - 1) * (2 - x));  // Calculer la racine carrée de l'expression
    } else {
        ok = false;
        return 7;  // Retourner une valeur spécifique qui indique une erreur
    }
}

int main() {
    double N;
    bool ok = true;  // Initialisation du booléen
    std::cout << "Tapez un double : ";  // Améliorer l'affichage
    std::cin >> N;

    double result = fonc(N, ok);  // Appel de la fonction

    if (result != 7) {
        std::cout << "La fonction est définie au point " << result << std::endl;
    } else {
        std::cout << "La fonction n'est pas définie au point " << N << std::endl;
    }

    return 0;
}
