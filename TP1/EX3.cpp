#include<iostream>
#include<unistd.h>
#include<unistd.h>
#include <cstdio> // Pour sprintf
using namespace std;

int main() {
    int positif;
    int somme = 0;  
    float moy;  
    int i = 0;  
    do {
         cout << "Veuillez saisir un entier strictement positif (0 pour arrêter) : " << endl;
          cin >> positif;

        if (positif > 0) {  
            somme += positif;  
            i++;  
        } else if (positif < 0) {
            cout << "Veuillez entrer un nombre positif !" << endl;
        }

    } while (positif != 0);  
    if(positif==0){
        char erreur[100];
        int len=sprint("ERREUR",erreur);
        write(2,len, erreur);}
       if (i > 0) {
        moy = float(somme) / i;  
        cout << "La moyenne des nombres saisis est : " << moy << endl;
    } else {
        cout << "Aucun nombre positif n'a été saisi." << endl;
    }

    return 0;
    
}
