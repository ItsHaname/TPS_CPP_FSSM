#include<iostream>
using namespace std;

// Namespace pour la fonction par valeur
namespace parValeur {
    void echange(int a, int b) {
        int c = a;
        a = b;
        b = c;
    }
}

// Namespace pour la fonction par référence
namespace parReference {
    void echange(int &a, int &b) {
        int c = a;
        a = b;
        b = c;
    }
}

// Namespace pour la fonction par adresse (pointeur)
namespace parAdresse {
    void echange(int *a, int *b) {
        int c = *a;
        *a = *b;
        *b = c;
    }
}

int main() {
   int x,y;
     std::cout<<"veuilles saisir le premier entier"<<std::endl;
     std::cin>>x;
     std::cout<<"veuilles saisir le deuxieme entier"<<std::endl;
     std::cin>>y;

    // Appel à la fonction par valeur
    cout << "Avant l'échange (par valeur) : x = " << x << ", y = " << y << endl;
    parValeur::echange(x, y);  // Appel à la fonction dans le namespace parValeur
    cout << "Après l'échange (par valeur) : x = " << x << ", y = " << y << endl;

    // Appel à la fonction par référence
    cout << "Avant l'échange (par référence) : x = " << x << ", y = " << y << endl;
    parReference::echange(x, y);  // Appel à la fonction dans le namespace parReference
    cout << "Après l'échange (par référence) : x = " << x << ", y = " << y << endl;

    // Appel à la fonction par adresse
    cout << "Avant l'échange (par adresse) : x = " << x << ", y = " << y << endl;
    parAdresse::echange(&x, &y);  // Appel à la fonction dans le namespace parAdresse
    cout << "Après l'échange (par adresse) : x = " << x << ", y = " << y << endl;

    return 0;
}
