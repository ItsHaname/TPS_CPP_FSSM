#include<iostream>
using namespace std;

int main() {
    int N;
    while(1) {
        cout << "veuillez saisir un nombre entre 1 et 4" << endl;

        cout << "==================================" << endl;
        cout << "              Menu                " << endl;
        cout << "==================================" << endl;
        cout << "1. Taper 1 pour incrémenter l’entier par un" << endl;
        cout << "2. Taper 2 pour décrémenter l’entier par 2" << endl;
        cout << "3. Taper 3 pour multiplier l’entier par 10" << endl;
        cout << "4. Taper 4 pour quitter" << endl;
        cout << "votre choix?" << endl;
        cin >> N;

    
        switch (N) {
            case 1:
                N = N + 1;
                cout << "N après incrémentation: " << N << endl; // Affiche le résultat
                break;
            case 2:
                N = N - 2;
                cout << "N après décrémentation: " << N << endl; // Affiche le résultat
                break;
            case 3:
                N = N * 10;
                cout << "N après multiplication: " << N << endl; // Affiche le résultat
                break;
            case 4:
                cout << "vous avez quitté le programme" << endl;
                return 0;  // Sortie du programme
            default:
                cout << "Erreur nombre saisie incorrect" << endl;
        }
    }

    return 0;
}
