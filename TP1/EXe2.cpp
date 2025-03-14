#include<iostream>
using namespace std;

int main(){
    int N;
    int compteur = 0;
    cout << "Veuillez saisir un entier N : ";
    cin >> N;
    
    // Boucle pour parcourir les nombres de 2 à N
    for (int i = 2; i <= N; i++) {  
        bool est_premier = true;  // On suppose que i est premier
        
        // Vérifier si i est divisible par un autre nombre
        for (int j = 2; j <= i / 2; j++) {  // On vérifie les diviseurs jusqu'à i/2
            if (i % j == 0) {  // Si i est divisible par j, il n'est pas premier
                est_premier = false;
                break;  // Arrêter la vérification si ce n'est pas un nombre premier
            }
        }
        
        if (est_premier) {  // Si est_premier reste vrai, i est premier
            compteur++;  // Incrémenter le compteur des nombres premiers
        }
    }

    // Afficher le résultat
    cout << "Il y a " << compteur << " nombres premiers jusqu'à " << N << "." << endl;

    return 0;  // Fin du programme
}
     