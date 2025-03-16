#include <iostream>

void appel() {
    static int compteur = 0;  // Conserve sa valeur entre les appels
    compteur++;
    std::cout << "Appel numéro " << compteur << std::endl;
}

int main() {
    char reponse;  // Déclaration du type
    do{
    std::cout << "Pour faire appel à la fonction appel(), tapez 'o'.\n"
                 "Sinon, tapez autre chose" << std::endl;
    std::cin >> reponse;

    if (reponse == 'o') {
        appel();  // Ajout du point-virgule
    } else {
        std::cout << "Goodbye" << std::endl;
    }
}while(reponse=='o');
    return 0;
}
